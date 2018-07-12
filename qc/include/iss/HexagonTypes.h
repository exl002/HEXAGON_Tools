/****************************************************************
# Copyright (c) $Date$ QUALCOMM INCORPORATED.
# All Rights Reserved.
# Modified by QUALCOMM INCORPORATED on $Date$
*****************************************************************/
#ifndef _HEXAGONTYPES_H_
#define _HEXAGONTYPES_H_

#include "HexagonVersions.h"

typedef unsigned char       HEX_1u_t;
typedef char                HEX_1s_t;
typedef unsigned short int  HEX_2u_t;
typedef short               HEX_2s_t;
typedef unsigned int        HEX_4u_t;
typedef int                 HEX_4s_t;

#ifdef _WIN32
typedef unsigned _int64     HEX_8u_t;
typedef _int64              HEX_8s_t;
#define MAX_PATH_LEN (MAX_PATH)
#else
typedef unsigned long long int HEX_8u_t;
typedef long long int          HEX_8s_t;
#define MAX_PATH_LEN (1024)
#endif

typedef double              HEX_8f_t;

typedef HEX_8u_t            HEX_PA_t;

typedef unsigned int        HEX_VA_t;

typedef enum hexagon_statistics_t
{
    HEX_TOTAL_PCYCLES,
    HEX_TOTAL_TCYCLES,
    HEX_THREAD_INSTRUCTIONS,
    HEX_THREAD_STALL_CYCLES,
    HEX_POWER_RESET_STATS,
    HEX_POWER_ALL_WAIT_PERCENT,
    HEX_POWER_AVG_ACTIVE_THREADS,
    HEX_POWER_AVG_PKT_DENSITY
} HEX_StatisticsType;

typedef enum hexagon_status_t
{
    HEX_STAT_ERROR = -1,
    HEX_STAT_SUCCESS,
    HEX_STAT_CANNOT_CONFIG,
    HEX_STAT_INVALID_ARGS,
    HEX_STAT_RANGE_ERROR,
    HEX_STAT_FILE_ACCESS_ERROR,
    HEX_STAT_DEVICE_NOT_FOUND,
    HEX_STAT_MEM_ACCESS_ERROR,
    HEX_STAT_CANNOT_TRANSLATE,
    HEX_STAT_NO_ACTIVE_THREADS,
    HEX_STAT_LOAD_ELF_ERROR,
    HEX_STAT_CORE_RESET,
    HEX_STAT_UNSUPPORTED
} HEXAPI_Status;

typedef enum hexagon_arch_t
{
    HEX_ARCH_UNKNOWN = 0,
    HEX_ARCH_V4 = 4,
    HEX_ARCH_V5 = 5,
    HEX_ARCH_V55 = 0x55,
    HEX_ARCH_V56 = 0x56
} HEXAPI_Arch;

typedef enum hexagon_cpu_t
{
    HEX_CPU_UNKNOWN = 0,

    HEX_CPU_V4M       = HEX_CPU_ID_V4M,
    HEX_CPU_V4C       = HEX_CPU_ID_V4C,
    HEX_CPU_V4L       = HEX_CPU_ID_V4L,
    HEX_CPU_V4        = HEX_CPU_V4M,

    HEX_CPU_V5A           = HEX_CPU_ID_V5A,
    HEX_CPU_V5A_256       = HEX_CPU_ID_V5A_256,
    HEX_CPU_V5A_128       = HEX_CPU_ID_V5A_128,
    HEX_CPU_V5A_128_REV2  = HEX_CPU_ID_V5A_128_REV2,
    HEX_CPU_V5A_128_REV2P = HEX_CPU_ID_V5A_128_REV2P,
    HEX_CPU_V5A_REV3      = HEX_CPU_ID_V5A_REV3,


    HEX_CPU_V5B_512   = HEX_CPU_ID_V5B_512,
    HEX_CPU_V5B_128   = HEX_CPU_ID_V5B_128,

    HEX_CPU_V5C_768   = HEX_CPU_ID_V5C_768,
    HEX_CPU_V5C_512   = HEX_CPU_ID_V5C_512,
    HEX_CPU_V5C_256   = HEX_CPU_ID_V5C_256,
    HEX_CPU_V5C_128   = HEX_CPU_ID_V5C_128,

    HEX_CPU_V5D_768   = HEX_CPU_ID_V5D_768,

    HEX_CPU_V5E_256   = HEX_CPU_ID_V5E_256,
    HEX_CPU_V5E_128   = HEX_CPU_ID_V5E_128,

    HEX_CPU_V5F_768   = HEX_CPU_ID_V5F_768,

    HEX_CPU_V5H       = HEX_CPU_ID_V5H,
    HEX_CPU_V5H_768   = HEX_CPU_ID_V5H_768,
    HEX_CPU_V5H_REV2  = HEX_CPU_ID_V5H_REV2,
    HEX_CPU_V5H_REV3  = HEX_CPU_ID_V5H_REV3,

    HEX_CPU_V5L       = HEX_CPU_ID_V5A_128,
    HEX_CPU_V5        = HEX_CPU_ID_V5A,

    HEX_CPU_V55A_256  = HEX_CPU_ID_V55A_256,
    HEX_CPU_V55A_128  = HEX_CPU_ID_V55A_128,
    HEX_CPU_V55B_1024 = HEX_CPU_ID_V55B_1024,

    HEX_CPU_V55       = HEX_CPU_ID_V55B_1024,

    HEX_CPU_V56D_256  = HEX_CPU_ID_V56D_256,
    HEX_CPU_V56D_768  = HEX_CPU_ID_V56D_768,
    HEX_CPU_V56E_256  = HEX_CPU_ID_V56E_256,
    HEX_CPU_V56E_512  = HEX_CPU_ID_V56E_512,
    HEX_CPU_V56E_1024 = HEX_CPU_ID_V56E_1024,
    HEX_CPU_V56F_256  = HEX_CPU_ID_V56F_256,
    HEX_CPU_V56F_768  = HEX_CPU_ID_V56F_768,
    HEX_CPU_V56G_1024 = HEX_CPU_ID_V56G_1024,
    HEX_CPU_V56H_1024 = HEX_CPU_ID_V56H_1024,
    HEX_CPU_V56J_768  = HEX_CPU_ID_V56J_768,
    HEX_CPU_V56S_768  = HEX_CPU_ID_V56S_768,
    HEX_CPU_V56T_512  = HEX_CPU_ID_V56T_512,
    HEX_CPU_V56T_768  = HEX_CPU_ID_V56T_768,
    HEX_CPU_V56U_512  = HEX_CPU_ID_V56U_512,
    HEX_CPU_V56V_512  = HEX_CPU_ID_V56V_512,
    HEX_CPU_V56W_512  = HEX_CPU_ID_V56W_512,
    HEX_CPU_V56W_768  = HEX_CPU_ID_V56W_768,
    HEX_CPU_V56X_768  = HEX_CPU_ID_V56X_768,

    HEX_CPU_V56       = HEX_CPU_ID_V56E_1024,

} HEXAPI_Cpu;

typedef enum hexagon_interval_t
{
    HEX_MILLISEC = 1,
    HEX_MICROSEC,
    HEX_NANOSEC,
    HEX_PICOSEC
} HEXAPI_Interval;

typedef enum hexgon_timing_mode_t
{
    HEX_NOTIMING = 0,
    HEX_TIMING_NODBC,
    HEX_TIMING,          // timing mode with data backed caches
    HEX_TIMING_COHERENCY // timing mode with data-backed caches and coherency checking
} HEXAPI_TimingMode;


typedef enum hexagon_core_state_t
{
    HEX_CORE_SUCCESS = 0,
    HEX_CORE_FINISHED,
    HEX_CORE_RESET,
    HEX_CORE_BREAKPOINT,
    HEX_CORE_ASYNCHRONOUS_BREAK,
    HEX_CORE_ERROR
} HEXAPI_CoreState;

typedef enum hexagon_trace_t
{
    HEX_TRACE_ICACHE = 0,
    HEX_TRACE_DCACHE,
    HEX_TRACE_L2CACHE,
    HEX_TRACE_MEM,
    HEX_TRACE_BUS,
    HEX_TRACE_PC,
    HEX_TRACE_STALL,
    HEX_TRACE_PC_MIN,
    HEX_TRACE_UARCH,
    HEX_TRACE_SILVERSTALL,
    HEX_TRACE_PC_NANO,
    HEX_TRACE_MAX
} HEXAPI_TracingType;

typedef enum null_ptr_t
{
    HEX_NULLPTR_IGNORE = 0,
    HEX_NULLPTR_WARN,
    HEX_NULLPTR_FATAL
} HEXAPI_Nullptr;

typedef enum bus_access_t
{
    HEX_INSTRUCTION_FETCH = 0,
    HEX_DATA_READ,
    HEX_DATA_WRITE,
    HEX_DATA_CASTOUT,
    HEX_DATA_READ_LOCKED,
    HEX_DATA_WRITE_LOCKED,
    HEX_SYNCH,
    HEX_BARRIER,
    HEX_DATA_READ_PREFETCH,
    HEX_INSTRUCTION_PREFETCH,
    HEX_DEBUG_READ,
    HEX_DEBUG_WRITE,
    HEX_DEBUG_READ_LOCKED,
    HEX_DEBUG_WRITE_LOCKED
} HEXAPI_BusAccessType;

typedef enum source_type_t
{
	HEX_SOURCE_SCALAR,
	HEX_SOURCE_HVX,
	HEX_SOURCE_SILVER,
	HEX_SOURCE_COPROC,
	HEX_SOURCE_OTHER
	// a counter, not a real entity NUM_SOURCE_TYPES 
} HEXAPI_SourceType;

typedef enum verbose_mode_t
{
    HEX_QUIET = 0,
    HEX_NORMAL,
    HEX_VERBOSE,
    HEX_REALLY_VERBOSE
} HEXAPI_VerboseMode;

typedef enum bus_burst_t
{
    HEX_BURST_FIXED = 0,
    HEX_BURST_INCREMENTAL,
    HEX_BURST_WRAPPED
} HEXAPI_BusBurstType;


/* ATTENTION USER: These next 2 register structures contain enumerations for all thread and    */
/*   System registers for all supported cores. This means it is up to the user to take care    */
/*   and only use registers appropriate to the core under use. Functions that take these       */
/*   enumerations as parameter arguments will return error (HEX_STAT_INVALID_ARGS) if the      */
/*   register in question is not supported by the core in use. Users should also be aware      */
/*   that the same register may have different bit definitions for different cores.            */
/*   Please check the Hexagon Architecture references.                                         */

typedef enum thread_register_t
{
    TH_REG_R0,
    TH_REG_R1,
    TH_REG_R2,
    TH_REG_R3,
    TH_REG_R4,
    TH_REG_R5,
    TH_REG_R6,
    TH_REG_R7,
    TH_REG_R8,
    TH_REG_R9,
    TH_REG_R10,
    TH_REG_R11,
    TH_REG_R12,
    TH_REG_R13,
    TH_REG_R14,
    TH_REG_R15,
    TH_REG_R16,
    TH_REG_R17,
    TH_REG_R18,
    TH_REG_R19,
    TH_REG_R20,
    TH_REG_R21,
    TH_REG_R22,
    TH_REG_R23,
    TH_REG_R24,
    TH_REG_R25,
    TH_REG_R26,
    TH_REG_R27,
    TH_REG_R28,
    TH_REG_R29,
    TH_REG_R30,
    TH_REG_R31,
    TH_REG_SA0,
    TH_REG_LC0,
    TH_REG_SA1,
    TH_REG_LC1,
    TH_REG_P3_P0,
    TH_REG_M0,
    TH_REG_M1,
    TH_REG_USR,
    TH_REG_PC,
    TH_REG_UGP,
    TH_REG_GP,
    TH_REG_ELR,
    TH_REG_SSR,
    TH_REG_IMASK,
    TH_REG_CS0,
    TH_REG_CS1,
    TH_REG_UPCYCLELO,
    TH_REG_UPCYCLEHI,
    TH_REG_UPMUCNT0,
    TH_REG_UPMUCNT1,
    TH_REG_UPMUCNT2,
    TH_REG_UPMUCNT3,
    TH_REG_SGP0,
    TH_REG_SGP1,
    TH_REG_STID,
    TH_REG_BADVA0,
    TH_REG_BADVA1,
    TH_REG_CCR,
    TH_REG_HTID,
    TH_REG_G0,
    TH_REG_G1,
    TH_REG_G2,
    TH_REG_G3

} HEXAPI_TH_REG;


typedef enum global_register_t
{
    G_REG_EVB,
    G_REG_MODECTL,
    G_REG_SYSCFG,
    G_REG_IPEND,
    G_REG_REV,
    G_REG_DIAG,
    G_REG_IAD,
    G_REG_IEL,
    G_REG_IAHL,
    G_REG_PCYCLEHI,
    G_REG_PCYCLELO,
    G_REG_ISDBST,
    G_REG_ISDBCFG0,
    G_REG_ISDBCFG1,
    G_REG_BRKPTPC0,
    G_REG_BRKPTCFG0,
    G_REG_BRKPTPC1,
    G_REG_BRKPTCFG1,
    G_REG_ISDBMBXIN,
    G_REG_ISDBMBXOUT,
    G_REG_ISDBEN,
    G_REG_ISDBGPR,
    G_REG_BRKPTINFO,
    G_REG_ISDBCMD,
    G_REG_ISDBVER,
    G_REG_RGDR,
    G_REG_ACC0,
    G_REG_ACC1,
    G_REG_CHICKEN,
    G_REG_STFINST,
    G_REG_PMUCNT0,
    G_REG_PMUCNT1,
    G_REG_PMUCNT2,
    G_REG_PMUCNT3,
    G_REG_PMUEVTCFG,
    G_REG_PMUCFG,
    G_REG_AVS,
    G_REG_CFGBASE,
    G_REG_VID,

    // V55
    G_REG_PMUCNT4,
    G_REG_PMUCNT5,
    G_REG_PMUCNT6,
    G_REG_PMUCNT7,
    G_REG_PMUEVTCFG1,
    G_REG_LIVELOCK 

} HEXAPI_G_REG;


typedef enum interrupt_state_t
{
    INT_PIN_DEASSERT = 0,
    INT_PIN_ASSERT
} HEXAPI_InterruptPinState;

typedef enum core_ready_state_t
{
    CORE_NOT_READY = 0,
    CORE_READY
} HEXAPI_CoreReadyState;

typedef enum transaction_state_t
{
    TRANSACTION_REPLAY = 0,
    TRANSACTION_SUCCESS,
    TRANSACTION_FAIL,
    TRANSACTION_LOCKED
} HEXAPI_TransactionStatus;

typedef enum openmode_t
{
    HEX_MODE_READ,          // "r"
    HEX_MODE_READBINARY,    // "rb"
    HEX_MODE_WRITE,         // "w"
    HEX_MODE_WRITEBINARY,   // "wb"
    HEX_MODE_APPEND,        // "a+"
    HEX_MODE_APPENDBINARY   // "ab+"
} HEXAPI_OpenMode;


typedef struct ptr_struct_t
{
    void *deviceHandlePtr;
    void *HexWrapPtr;
	void (*user_callback);
} HEXAPI_ptrStruct;


typedef enum privilege_mode_t
{
    MONITOR_MODE = 0,
    USER_MODE,
    GUEST_MODE,
    INVALID_MODE
} HEXAPI_PrivilegeMode;

typedef enum rx_message_type_t
{
    HEX_RXMSG_EXIT_EARLY = 0
} HEXAPI_RxMsgType;

typedef enum info_query_subject_t
{
  HEX_INFO_THRREG,
  HEX_INFO_GLOREG,
  HEX_INFO_KEYCPU,
  HEX_INFO_ARCH,
  HEX_INFO_THREAD,
  HEX_INFO_VECTOR,
  HEX_INFO_CPU_RAW
} HEXAPI_Info;

#define MAX_VECTOR_TYPE (4)
typedef struct vector_info_struct
{
  const char *name;
  HEX_1u_t type_name;
  HEX_1u_t how_many;
  HEX_1u_t num_reg_context; // for each
  HEX_1u_t num_vec_type;
  HEX_2u_t type_version;
  HEX_1u_t name_reg[MAX_VECTOR_TYPE];
  HEX_1u_t num_reg[MAX_VECTOR_TYPE];
  HEX_2u_t len_reg[MAX_VECTOR_TYPE];
} HEXAPI_VectorInfo;

typedef HEXAPI_TransactionStatus(*bus_transaction_request_callback)(
    void*,                  /*deviceHandle*/
    HEX_PA_t,              /*physical address*/
    HEX_4u_t,              /*lengthInBytes*/
    HEX_1u_t*,            /*data*/
    HEX_4u_t,              /*requestID*/
    HEXAPI_BusAccessType,  /*type*/
    HEX_4u_t,              /*threadNum*/
    HEXAPI_BusBurstType   /*burst*/
    );

typedef void (*memory_read_callback)(void*      /*deviceHandle*/
                                    , HEX_PA_t  /*physical address*/
                                    , HEX_8u_t  /*value*/
                                    , HEX_4u_t  /*sizeInBytes*/
                                    );

typedef void (*memory_written_callback)(void*      /*deviceHandle*/
                                       , HEX_PA_t  /*physical address*/
                                       , HEX_8u_t  /*value*/
                                       , HEX_4u_t  /*sizeInBytes*/
                                       );

typedef void (*cosim_callback)(void* /*deviceHandle*/);

typedef void (*pc_callback)(void* /*deviceHandle*/);

typedef void (*timed_callback)(void* /*deviceHandle*/);

typedef void (*frequency_change_callback)(void*      /*deviceHandle*/
                                         , HEX_8u_t  /*changed freq*/
                                         );
typedef void (*core_ready_callback)(void * /*deviceHandle*/, HEXAPI_CoreReadyState polarity );

typedef HEX_8u_t /*Rdd - dest. reg*/ (*user_defined_instruction_callback)(void *,	  /*deviceHandle*/
																		 int threadno,/*thread number*/
													 					 HEX_8u_t,    /*RssV - src val 1*/
																		 HEX_8u_t,    /*RttV - src val 2*/
													 					 HEX_8u_t,	  /*RxxV - src val 3*/
													 					 HEX_1u_t	  /*immediate value*/
																	 );

typedef void (*axi_bus_finished_callback)(     void *,          /*really "system_t *" */
                                               int threadno,    /*thread number*/
                                               HEX_PA_t paddr,  /*physical addr*/
                                               HEX_4u_t width,  /*size of access*/
                                               int type,        /*type of access*/
                                               int id,          /*identifier for access*/
                                               unsigned char *dataptr);

typedef void (*privilege_change_callback)(void *,          /* deviceHandle */
                                     HEX_4u_t,            /* thread */
                                     HEXAPI_PrivilegeMode /* mode */
                                );

typedef void (*l1saccess_callback)(
  void*,                /*deviceHandle*/
  HEX_PA_t,             /*physical address*/
  HEX_4u_t,             /*lengthInBytes*/
  HEX_4u_t,             /*threadNum*/
  HEXAPI_BusAccessType, /*access_type*/
  HEXAPI_SourceType     /* transaction source type */
);

typedef void (*l2tcmaccess_callback)(
  void*,               /*deviceHandle*/
  HEX_PA_t,            /*physical address*/
  HEX_4u_t,            /*lengthInBytes*/
  HEX_4u_t,            /*threadNum*/
  HEXAPI_BusAccessType /*access_type*/
);
#endif
