//===----- ResourcePriorityQueue.h - A DFA-oriented priority queue -------===//
//
//
//===----------------------------------------------------------------------===//
//
// This file implements the ResourcePriorityQueue class, which is a
// SchedulingPriorityQueue that schedules using DFA state to
// reduce the length of the critical path through the basic block
// on VLIW platforms.
//
//===----------------------------------------------------------------------===//

#ifndef RESOURCE_PRIORITY_QUEUE_H
#define RESOURCE_PRIORITY_QUEUE_H

#include "llvm/CodeGen/DFAPacketizer.h"
#include "llvm/CodeGen/SelectionDAGISel.h"
#include "llvm/CodeGen/ScheduleDAG.h"
#include "llvm/MC/MCInstrItineraries.h"
#include "llvm/Target/TargetInstrInfo.h"
#include "llvm/Target/TargetRegisterInfo.h"
#include "llvm/Support/Debug.h"

#include "llvm/Support/raw_ostream.h"
#include <iostream>

namespace llvm {
  class ResourcePriorityQueue;
  class DAGCluster;

  /// Sorting functions for the Available queue.
  struct resource_sort : public std::binary_function<SUnit*, SUnit*, bool> {
    ResourcePriorityQueue *PQ;
    explicit resource_sort(ResourcePriorityQueue *pq) : PQ(pq) {}

    bool operator()(const SUnit *left, const SUnit *right) const;
  };

  struct SortSU {
    SUnit *SU;
    explicit SortSU(SUnit *su) : SU(su) {}

    inline bool operator<(const SortSU &rhs) const {
      return this->SU->getHeight() > rhs.SU->getHeight();
    }
  };

  struct SortSUCmp {
    bool operator()(const SortSU &SU1, const SortSU &SU2) {
      return SU1.SU->getHeight() > SU2.SU->getHeight();
    }
  };

  struct SortSDep {
    SDep *SD;
    explicit SortSDep(SDep *sd) : SD(sd) {}

    inline bool operator<(const SortSDep &rhs) const {
      return this->SD->getSUnit()->getHeight() >
        rhs.SD->getSUnit()->getHeight();
    }
  };

  struct SortSDepCmp {
    bool operator()(const SortSDep &SD1, const SortSDep &SD2) {
      return SD1.SD->getSUnit()->getHeight() > SD2.SD->getSUnit()->getHeight();
    }
  };

  /// Class to track scheduling regions - clusters - currently
  /// disabled.
  class DAGCluster {
    const TargetInstrInfo *TII;
    /// Cluster members.
    SUnit *EntryPoint;
    SUnit *ExitSU;
    /// True if the cluster has been started for scheduling.
    bool ClusterStarted;
    /// Number of unscheduled cluster members left.
    unsigned UnscheduledMembers;
  public:
    DAGCluster(unsigned Id = 0)
      : EntryPoint(0), ExitSU(0), ClusterStarted(false),
        UnscheduledMembers(0), ClusterId (Id),
        MaxDepth(0), TotalDepth(0), MinDepth(0) {};

    DAGCluster(const TargetInstrInfo *tii, unsigned Id, SUnit *exitsu)
     : TII(tii), ExitSU(exitsu), ClusterStarted(false), UnscheduledMembers(0),
       ClusterId(Id), MaxDepth(0), TotalDepth(0), MinDepth(0) {};

    ~DAGCluster() {}

    // Cluster elements and some other attributes.
    std::vector<SUnit*> Elements;
    unsigned ClusterId;
    unsigned MaxDepth;
    unsigned TotalDepth;
    unsigned MinDepth;

    // Mark cluster as one started for scheduling.
    void startCluster();

    // Override scheduling priority.
    void setScheduleHigh() {
      for (unsigned i = 0, e = Elements.size(); i != e; ++i) {
        Elements[i]->isScheduleHigh = true;
        // Reset this to look unclustered, so we do not
        // interfere with early clustering.
        Elements[i]->NodeQueueId = 0;
      }
    }

    // Drop cluster assignment.
    void resetCluster() {
      for (unsigned i = 0, e = Elements.size(); i != e; ++i)
        // Reset this to look unclustered.
        Elements[i]->NodeQueueId = 0;
    }

    // Incremental update to cluster status. It changes during scheduling.
    void updateCluster(SUnit *SU);

    unsigned unscheduledClusterMembers() {
      return UnscheduledMembers;
    }

    bool SUContainsCall(SUnit *SU) {
      if (!SU)
        return false;

      for (SDNode *N = SU->getNode(); N; N = N->getGluedNode())
        if (N->isMachineOpcode()) {
          const MCInstrDesc &TID = TII->get(N->getMachineOpcode());
          if (TID.isCall())
            return true;
        }
      return false;
    }

    bool SUIsMachineOp(SUnit *SU) {
      if (!SU)
        return false;
      if (SU->isInstr())
        return true;
      if (!SU->getNode())
        return false;
      if (SUContainsCall(SU))
        return true;
      if (SU->getNode()->isMachineOpcode())
        return true;
      return false;
    }

    // Has this SU been assigned to any clusters?
    // Since we are overly concerned with no modifications to the SU
    // original declaration, things like this are unavoidable.
    bool SUInCluster(SUnit *SU) {
      for (unsigned i = 0, e = Elements.size(); i != e; ++i)
        if (SU == Elements[i])
          return true;
      return false;
    }

    void addElement(SUnit *SU) {
      if (!SUInCluster(SU))
        Elements.push_back(SU);
    }

    void push_back(SUnit *SU) {
      SU->NodeQueueId = ClusterId;
      Elements.push_back(SU);
    }

    void pop_back() {
      Elements.pop_back();
    }

    // Dependency chains are used for cluster construction.
    unsigned getChainForSU(SUnit *SU) {
      if (!SU || SU->NodeQueueId == 0 ||
          SU->NodeQueueId == 0xffffffff)
        return 0;

      return SU->NodeQueueId;
    }

    SUnit *operator[](unsigned index) {
      assert(index < Elements.size() && "Element access out of bounds.");
      return Elements[index];
    }

    unsigned size() {
      return Elements.size();
    }

    void dump();

  private:
    // All of these are methods used for cluster construction.
    // They are currently removed from this patch. Detailed description
    // will be provided in a separate patch.
    unsigned iterateChainSucc(SUnit *SU, unsigned *Depth,
                              unsigned ClusterNumber,
                              bool IncludePseudo,
                              std::vector<SUnit*> &DepList);
    unsigned iterateChainPred(SUnit *SU, unsigned *Depth,
                              unsigned ClusterNumber,
                              bool IncludePseudo,
                              std::vector<SUnit*> &DepList);
    unsigned iterateDominatingCluster(SUnit *SU, unsigned *Depth,
                                      unsigned ClusterNumber,
                                      bool IncludePseudo,
                                      std::vector<SUnit*> &DepList);

  public:
    void expandToIncludePseudos();
    bool findMergeableCluster(unsigned *DominatorId);
  };

  class ResourcePriorityQueue : public SchedulingPriorityQueue {
  protected:
    /// SUnits - The SUnits for the current graph.
    std::vector<SUnit> *SUnits;

    /// NumNodesSolelyBlocking - This vector contains, for every node in the
    /// Queue, the number of nodes that the node is the sole unscheduled
    /// predecessor for.  This is used as a tie-breaker heuristic for better
    /// mobility.
    std::vector<unsigned> NumNodesSolelyBlocking;

    /// List of clusters currently available for scheduling.
    std::vector<DAGCluster*> StartedCluster;

    /// Keeping track of scheduled memebers in a cluster.
    std::vector<unsigned> UnscheduledClusterMembers;
    DAGCluster *CurrentCluster;
    bool ClusterScheduling;

    /// Queue - The scheduling queue.
    std::vector<SUnit*> Queue;

    /// RegPressure - Tracking current reg pressure per register class.
    std::vector<unsigned> RegPressure;

    /// RegLimit - Tracking the number of allocatable registers per register
    /// class.
    std::vector<unsigned> RegLimit;

    /// Scheduling DAG.
    ScheduleDAG *sDAG;

    /// Old style scheduling API.
    resource_sort Picker;

    const TargetMachine *TM;
    const MachineRegisterInfo *MRI;
    const TargetRegisterInfo *TRI;
    const TargetLowering *TLI;
    const TargetInstrInfo *TII;
    const InstrItineraryData *InstrItins;

    /// ResourcesModel - Represents VLIW state.
    /// Not limited to VLIW targets per say, but assumes
    /// definition of DFA by a target.
    DFAPacketizer *ResourcesModel;

    /// Local packet/bundle model. Purely
    /// internal to the MI schedulre at the time.
    std::vector<SUnit*> Packet;

    /// Total packets in the region.
    unsigned TotalPackets;

    /// Heuristics for estimating register pressure.
    unsigned ParallelLiveRanges;
    signed HorizontalVerticalBalance;

  public:
    ResourcePriorityQueue():
      Picker(this), TM(0), MRI(0), TRI(0),
      TLI(0), TII(0), InstrItins(0), ResourcesModel(0)
    {}

    ResourcePriorityQueue(SelectionDAGISel *IS);

    virtual ~ResourcePriorityQueue() {
      delete ResourcesModel;
    }

    bool isBottomUp() const { return false; }

    void initNodes(std::vector<SUnit> &sunits);

    void addNode(const SUnit *SU) {
      NumNodesSolelyBlocking.resize(SUnits->size(), 0);
    }

    void updateNode(const SUnit *SU) {}

    void releaseState() {
      SUnits = 0;
    }

    unsigned getLatency(unsigned NodeNum) const {
      assert(NodeNum < (*SUnits).size());
      return (*SUnits)[NodeNum].getHeight();
    }

    unsigned getNumSolelyBlockNodes(unsigned NodeNum) const {
      assert(NodeNum < NumNodesSolelyBlocking.size());
      return NumNodesSolelyBlocking[NodeNum];
    }

    /// Single cost function reflecting benefit of scheduling SU
    /// in the current cycle.
    virtual signed SUSchedulingCost(SUnit *SU);

    /// InitNumRegDefsLeft - Determine the # of regs defined by this node.
    virtual void initNumRegDefsLeft(SUnit *SU);

    /// Update reg pressure model.
    void updateNumRegDefsLeft(SUnit *SU);

    /// Top level reg pressure summary in two different flavors.
    virtual signed regPressureDelta(SUnit *SU, bool RawPressure = false);
    virtual signed rawRegPressureDelta(SUnit *SU, unsigned RCId);

    /// Antiquated API to work with old SDNode scheduler,
    /// with original scheduling heuristic.
    bool empty() const { return Queue.empty(); }
    virtual void push(SUnit *SU);
    virtual SUnit *pop();
    virtual void remove(SUnit *SU);

    /// Debugging support.
    virtual void dump(ScheduleDAG* DAG) const;
    void setDag(ScheduleDAG *DAG){
      sDAG = DAG;
    }

    /// scheduledNode - Main resource tracking point.
    virtual void scheduledNode(SUnit *Node);

    /// isResourceAvailable - Consult DFA and interanl bundle/packet
    ///  modeling regarding resources availability.
    virtual bool isResourceAvailable(SUnit *SU);

    /// reserveResources - Reserve DFA state.
    virtual void reserveResources(SUnit *SU);

    /// Several low level utilities.
    virtual bool SUContainsCall(SUnit *SU);
    virtual bool SUIsMachineOp(SUnit *SU);
    unsigned getChainForSU(SUnit *SU);
    void dumpCluster(unsigned CId);

  protected:
    /// API for old style scheduling.
    void adjustPriorityOfUnscheduledPreds(SUnit *SU);
    SUnit *getSingleUnscheduledPred(SUnit *SU);

    /// How many uses of certain register type
    /// are there in Pred or Succ of a node.
    /// Used for reg pressure calculation.
    virtual unsigned numberRCValPredInSU(SUnit *SU, unsigned RCId);
    virtual unsigned numberRCValSuccInSU(SUnit *SU, unsigned RCId);
    virtual void updateRegPressureModel(SUnit *SU);
  };

  /// This class simply overwrites implementation of some
  /// methods to be able to operate on MIs, and will be eliminated
  /// once SDNode scheduler is fully disabled.
  class ResourcePriorityQueueMI : public ResourcePriorityQueue {
  public:
    ResourcePriorityQueueMI(MachineFunction *MF);
    ~ResourcePriorityQueueMI() {}

    bool isResourceAvailable(SUnit *SU);
    signed regPressureDelta(SUnit *SU, bool RawPressure = false);
    signed rawRegPressureDelta(SUnit *SU, unsigned RCId);
    signed SUSchedulingCost(SUnit *SU);
    void scheduledNode(SUnit *Node);
    void reserveResources(SUnit *SU);
    void initNumRegDefsLeft(SUnit *SU);

  protected:
    unsigned numberRCValPredInSU(SUnit *SU, unsigned RCId);
    unsigned numberRCValSuccInSU(SUnit *SU, unsigned RCId);
    void updateRegPressureModel(SUnit *SU);
  };

}

#endif
