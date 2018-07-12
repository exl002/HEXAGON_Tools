/*****************************************************************
# Copyright (c) $Date$ QUALCOMM INCORPORATED.
# All Rights Reserved.
# Modified by QUALCOMM INCORPORATED on $Date$
*****************************************************************/
/*
   Second-level Interrupt Controller

   This is a configurable cosim module that implements a second-level interrupt controller
   for the ADSP.  It takes 4 arguments:

   reg_base : base address of the SIRC registers
   L1_Int   : The QDSP6 interrupt to assert when a L2 int is recognized
   int_base : The base interrupt number for gdb to set interrupt on this device
   num_ints : The number of interrupts serviced by this device

   The registers defined for this device are:

   ADSP_SIRCx_INT_ENABLE    (reg_base + 0x00)
   ADSP_SIRCx_INT_ENABLE_CLEAR  (reg_base + 0x04)
   ADSP_SIRCx_INT_ENABLE_SET    (reg_base + 0x08)
   ADSP_SIRCx_INT_TYPE      (reg_base + 0x0c)
   ADSP_SIRCx_INT_POLARITY  (reg_base + 0x10)
   ADSP_SIRCx_IRQ_STATUS    (reg_base + 0x14)
   ADSP_SIRCx_INT_CLEAR     (reg_base + 0x18)
   ADSP_SIRCx_SOFT_INT      (reg_base + 0x1c)
   ADSP_SIRCx_IRQ_PENDING   (reg_base + 0x20)

   This device registers itself with the simulator as an L2 int controller.  It was designed
   such that ADSP_SIRCx_IRQ_PENDING represents the external device connections.  Whenever a
   bit in this register is set, we assume that an external device is requesting an interrupt
   and the STATUS register and L1 interrupt will be set or reset accordingly.

 */
#ifdef VCPP
#pragma warning (disable : 4786)
#endif

#include <iostream>
#include <vector>
using namespace std;
#include "sirc.h"

#define DEBUG 0

// If address x is register y
#define IS_REG(x,y) (((x) >= (y)) && ((x) <= ((y) + 3)))

SIRC::SIRC(HexagonWrapper *pHW)
{
    m_HW = pHW;
    cycle_count = 0;
    m_sum = 0;
    m_int_enable = 0;
    m_int_enable_clear = 0;
    m_int_enable_set = 0;
    m_int_type = 0;
    m_int_polarity = 0;
    m_irq_status = 0;
    m_int_clear = 0;
    m_soft_int = 0;
    m_irq_pending = 0;
#if DEBUG
    printf("Construct SIRC...\n");
#endif
}

SIRC::~SIRC()
{
    m_HW = NULL;
#if DEBUG
    printf("Destruct SIRC...\n");
#endif
}

void SIRC::setReadValue(HEX_4u_t *regAddr, HEX_1u_t **dataptr, HEXAPI_BusAccessType bat)
{
    if(bat == HEX_DEBUG_READ)
    {
        *((HEX_4u_t *) *dataptr) = *regAddr;
    }
    else
    {
        *dataptr = (HEX_1u_t *) regAddr;
    }
}

// Need to enable partial register writes
// Set the proper bytes within result based on addresses and size
// Restricted to 4 bytes or fewer
// The addr will be such that the entire write will be within the result, where result
//  starts at startAddr
void SIRC::AssignValue(unsigned int *result, HEX_1u_t *value, int numBytes, unsigned int startAddr, unsigned int addr)
{
    unsigned int byteMask;
    unsigned int addrDiff = addr - startAddr;
    unsigned int c;

#if DEBUG
    printf("AssignValue: result=0x%08x, value=0x%llx, numBytes=%d, saddr=0x%08x, addr=0x%08x\n",
           *result, *((HEX_8u_t *) value), numBytes, startAddr, addr);
#endif

    if(numBytes == 4)
    {
        *result = *((unsigned int *) value);
        return;
    }

    switch(numBytes)
    {
        case 1:
            byteMask = 0xff << (addrDiff * 8);
#if DEBUG
            printf("byteMask = 0x%08x\n", byteMask);
#endif
            c = *((unsigned char *) value);
            c <<= (addrDiff * 8);
#if DEBUG
            printf("c = 0x%08x\n", c);
#endif
            *result &= ~byteMask;
            *result |= (c & byteMask);
            break;

        case 2:
            AssignValue(result, value, 1, startAddr, addr);
            AssignValue(result, &value[1], 1, startAddr, addr + 1);
            break;

        default:
            printf("BAD BYTE COUNT!! (%d)\n", numBytes);
            exit(-103);
    }
}

HEXAPI_TransactionStatus SIRCBusAccess(void *pSIRC
                                       , HEX_PA_t address
                                       , HEX_4u_t numBytes
                                       , HEX_1u_t *dataptr
                                       , HEX_4u_t reqId
                                       , HEXAPI_BusAccessType bat
                                       , HEX_4u_t tnum
                                       , HEXAPI_BusBurstType bt)
{
    SIRC *tc = (SIRC *) pSIRC;
    HEX_4u_t new_status, old_status = tc->m_irq_status;

    if((bat == HEX_DATA_WRITE) || (bat == HEX_DEBUG_WRITE) || (bat == HEX_DATA_CASTOUT))
    {
        if(dataptr != 0) // do not copy dataptr into value if dataptr is NULL
        {
#if DEBUG
            printf("%s: Memory write addr=0x%x, value=0x", tc->myname, address);
            {
                int i;
                for(i = 0; i < numBytes; i++)
                {
                    printf("%02x", dataptr[i]);
                }
                printf("\n"); fflush(stdout);
            }
#endif

            if(IS_REG(address, ADSP_SRCx_INT_ENABLE))
            {
                tc->AssignValue(&tc->m_int_enable, dataptr, numBytes, ADSP_SRCx_INT_ENABLE, address);
            }
            else if(IS_REG(address, ADSP_SRCx_INT_ENABLE_CLEAR))
            {
                tc->AssignValue(&tc->m_int_enable_clear, dataptr, numBytes, ADSP_SRCx_INT_ENABLE_CLEAR, address);
                tc->m_int_enable &= ~tc->m_int_enable_clear;
            }
            else if(IS_REG(address, ADSP_SRCx_INT_ENABLE_SET))
            {
                tc->AssignValue(&tc->m_int_enable_set, dataptr, numBytes, ADSP_SRCx_INT_ENABLE_SET, address);
                tc->m_int_enable |= tc->m_int_enable_set;
            }
            else if(IS_REG(address, ADSP_SRCx_INT_TYPE))
            {
                tc->AssignValue(&tc->m_int_type, dataptr, numBytes, ADSP_SRCx_INT_TYPE, address);
            }
            else if(IS_REG(address, ADSP_SRCx_INT_POLARITY))
            {
                tc->AssignValue(&tc->m_int_polarity, dataptr, numBytes, ADSP_SRCx_INT_POLARITY, address);
            }
            else if(IS_REG(address, ADSP_SRCx_IRQ_STATUS))
            {
                tc->AssignValue(&tc->m_irq_status, dataptr, numBytes, ADSP_SRCx_IRQ_STATUS, address);
                tc->m_irq_pending |= tc->m_irq_status;
                printf("%s: Warning: Writing read-only ADSP_SRCx_IRQ_STATUS register\n", tc->myname);
            }
            else if(IS_REG(address, ADSP_SRCx_INT_CLEAR))
            {
                tc->AssignValue(&tc->m_int_clear, dataptr, numBytes, ADSP_SRCx_INT_CLEAR, address);
                //tc->m_irq_status &= ~(tc->m_int_type & tc->m_int_clear);  // Should not reset the status register bit (George, 9/26/07)
                tc->m_irq_pending &= ~(tc->m_int_type & tc->m_int_clear);
            }
            else if(IS_REG(address, ADSP_SRCx_SOFT_INT))
            {
                tc->AssignValue(&tc->m_soft_int, dataptr, numBytes, ADSP_SRCx_SOFT_INT, address);
                tc->m_irq_status |= (tc->m_int_type & tc->m_soft_int);
                tc->m_irq_pending |= (tc->m_int_type & tc->m_soft_int);
            }
            else if(IS_REG(address, ADSP_SRCx_IRQ_PENDING))
            {
                tc->AssignValue(&tc->m_irq_pending, dataptr, numBytes, ADSP_SRCx_IRQ_PENDING, address);
//        printf("%s: Warning: Writing read-only ADSP_SRCx_IRQ_PENDING register\n", tc->myname);
            }
            else
            {
                printf("%s: INTERNAL ERROR\n", tc->myname);
            }

            new_status = (tc->m_irq_pending | tc->m_irq_status) & tc->m_int_enable;

#if DEBUG
            printf("%s: new_status=0x%08x, old_status=0x%08x, m_irq_pending=0x%08x, m_irq_status=0x%08x, m_int_enable=0x%08x\n",
                   tc->myname, new_status, old_status, tc->m_irq_pending, tc->m_irq_status, tc->m_int_enable);
#endif

            if(!((old_status == 0) && (new_status == 0)))
            {

                if(!((old_status != 0) && (new_status != 0)))    // L1 interrupt already asserted
                {

                    // Either we have status going from non-zero to zero, or zero to non-zero.
                    // Either assert or deassert L1 interrupt
                    tc->m_irq_status = new_status;

                    if(new_status == 0)   // Clear the interrupt
                    {
                        tc->m_HW->ClearInterrupt(tc->l1int);
                    }
                    else
                    {
                        // Generate interrupt
                        tc->m_HW->SetInterrupt(tc->l1int, INT_PIN_ASSERT);
                    }
                }
                else
                {
                    tc->m_irq_status = new_status;
                }
            }
        } // dataptr != 0
    }
    else if((bat == HEX_DATA_READ) || (bat == HEX_DEBUG_READ))
    {
#if DEBUG
        printf("%s: Memory read addr=0x%x\n", tc->myname, address);
#endif

// TODO: Ensure that a read does not span multiple registers

        if(IS_REG(address, ADSP_SRCx_INT_ENABLE))
        {
            tc->setReadValue(&tc->m_int_enable, &dataptr, bat);
        }
        else if(IS_REG(address, ADSP_SRCx_INT_ENABLE_CLEAR))
        {
            tc->setReadValue(&tc->m_int_enable_clear, &dataptr, bat);
            printf("%s: Warning: Reading write-only ADSP_SRCx_INT_ENABLE_CLEAR register\n", tc->myname);
        }
        else if(IS_REG(address, ADSP_SRCx_INT_ENABLE_SET))
        {
            tc->setReadValue(&tc->m_int_enable_set, &dataptr, bat);
            printf("%s: Warning: Reading write-only ADSP_SRCx_INT_ENABLE_SET register\n", tc->myname);
        }
        else if(IS_REG(address, ADSP_SRCx_INT_TYPE))
        {
            tc->setReadValue(&tc->m_int_type, &dataptr, bat);
        }
        else if(IS_REG(address, ADSP_SRCx_INT_POLARITY))
        {
            tc->setReadValue(&tc->m_int_polarity, &dataptr, bat);
        }
        else if(IS_REG(address, ADSP_SRCx_IRQ_STATUS))
        {
            tc->setReadValue(&tc->m_irq_status, &dataptr, bat);
        }
        else if(IS_REG(address, ADSP_SRCx_INT_CLEAR))
        {
            tc->setReadValue(&tc->m_int_clear, &dataptr, bat);
            printf("%s: Warning: Reading write-only ADSP_SRCx_INT_CLEAR register\n", tc->myname);
        }
        else if(IS_REG(address, ADSP_SRCx_SOFT_INT))
        {
            tc->setReadValue(&tc->m_soft_int, &dataptr, bat);
            printf("%s: Warning: Reading write-only ADSP_SRCx_SOFT_INT register\n", tc->myname);
        }
        else if(IS_REG(address, ADSP_SRCx_IRQ_PENDING))
        {
            tc->setReadValue(&tc->m_irq_pending, &dataptr, bat);
        }
        else
        {
            printf("%s: INTERNAL ERROR\n", tc->myname);
        }

        //printf("Read BusAccess with value : 0x%x at address: 0x%x, width: %d", value, address, numBytes);
    }
    else
    {
        fprintf(stderr, "\nSIRCCosimBusAccess: Cannot service this bus transaction type %d", bat);
        return TRANSACTION_FAIL;
    }

    tc->m_HW->BusTransactionFinished(dataptr, numBytes, reqId);

    return TRANSACTION_SUCCESS;
}

// Need to enable partial register reads, as well.
HEX_8u_t SIRC::GetValue(unsigned int reg, int numBytes, unsigned int startAddr, unsigned int addr)
{
    unsigned int addrDiff = addr - startAddr;
    unsigned char *c = (unsigned char *) &reg;

    if(numBytes == 4)
    {
        return ((HEX_8u_t) reg);
    }

    switch(numBytes)
    {
        case 1:
            return((HEX_8u_t) c[addrDiff]);
            break;

        case 2:
            return((HEX_8u_t) c[addrDiff] | ((HEX_8u_t) c[addrDiff + 1] << 8));
            break;

        default:
            printf("BAD BYTE COUNT FOR READ!! (%d)\n", numBytes);
            exit(-103);
    }
}

// Validate the arguments to the cosim
int SIRC::ValidateArgs(char *args)
{
    char *cp = args;
    char tok[50];
    unsigned int ndx, ishex;

    if(args == NULL)
    {
        return -1;
    }

    if(strlen(args) < 7)
    {
        return -1;    // need at least 4 args space-separated
    }

    while(*cp && ((*cp == ' ') || (*cp == '\t')))
    {
        cp++;
    }

    if(*cp == '\0')
    {
        return -1;
    }

    ndx = 0;
    tok[0] = '\0';
    ishex = 0;

    if(!strncmp(cp, "0x", 2) || !strncmp(cp, "0X", 2))
    {
        cp += 2;
        strcpy(tok, "0x");
        ndx = 2;
        ishex = 1;
    }

    while(isxdigit(*cp))
    {
        tok[ndx++] = *cp++;
    }

    tok[ndx] = '\0';

    if(ishex)
    {
        sscanf(tok, "%x", &reg_base);
    }
    else
    {
        sscanf(tok, "%d", &reg_base);
    }

    while(*cp && ((*cp == ' ') || (*cp == '\t')))
    {
        cp++;
    }

    if(*cp == '\0')
    {
        return -1;
    }

    ndx = 0;
    tok[0] = '\0';
    ishex = 0;

    if(!strncmp(cp, "0x", 2) || !strncmp(cp, "0X", 2))
    {
        cp += 2;
        strcpy(tok, "0x");
        ndx = 2;
        ishex = 1;
    }

    while(isxdigit(*cp))
    {
        tok[ndx++] = *cp++;
    }

    tok[ndx] = '\0';

    if(ishex)
    {
        sscanf(tok, "%x", &l1int);
    }
    else
    {
        sscanf(tok, "%d", &l1int);
    }

    while(*cp && ((*cp == ' ') || (*cp == '\t')))
    {
        cp++;
    }

    if(*cp == '\0')
    {
        return -1;
    }

    ndx = 0;
    tok[0] = '\0';
    ishex = 0;

    if(!strncmp(cp, "0x", 2) || !strncmp(cp, "0X", 2))
    {
        cp += 2;
        strcpy(tok, "0x");
        ndx = 2;
        ishex = 1;
    }

    while(isxdigit(*cp))
    {
        tok[ndx++] = *cp++;
    }

    tok[ndx] = '\0';

    if(ishex)
    {
        sscanf(tok, "%x", &int_base);
    }
    else
    {
        sscanf(tok, "%d", &int_base);
    }

    while(*cp && ((*cp == ' ') || (*cp == '\t')))
    {
        cp++;
    }

    if(*cp == '\0')
    {
        return -1;
    }

    ndx = 0;
    tok[0] = '\0';
    ishex = 0;

    if(!strncmp(cp, "0x", 2) || !strncmp(cp, "0X", 2))
    {
        cp += 2;
        strcpy(tok, "0x");
        ndx = 2;
        ishex = 1;
    }

    while(isxdigit(*cp))
    {
        tok[ndx++] = *cp++;
    }

    tok[ndx] = '\0';

    if(ishex)
    {
        sscanf(tok, "%x", &num_ints);
    }
    else
    {
        sscanf(tok, "%d", &num_ints);
    }

    return 0;
}

extern "C" {
#include "common.h"

//This interface is used when cosims need arguments.  The args is a string exactly as typed in the cosim config file.
    void INTERFACE *RegisterCosimArgs(char **name, HexagonWrapper *simPtr, char *args)
    {
        SIRC *p2SIRC = (SIRC *) new SIRC(simPtr);
        HEXAPI_Status stat;

        int retval = p2SIRC->ValidateArgs(args);

#if DEBUG

        if(args == NULL)
        {
            printf("NULL arguments\n");
        }
        else
        {
            printf("Arguments are '%s'\n", args);
        }

#endif

        if(retval != 0)
        {
            printf("SIRC: Invalid args.  Arg list is: <register_base> <int_num> <int_base> <num_ints>\n");
            fflush(stdout);
            exit(-100);
        }

        sprintf(p2SIRC->myname, "sirc_0x%08x", p2SIRC->reg_base);
        *name = (char *) calloc(1, strlen(p2SIRC->myname) + 10);
        strcpy(*name, p2SIRC->myname);

        if(p2SIRC->l1int >= 32)
        {
            printf("%s: Invalid interrupt specified (%d).  Must be < 32\n", p2SIRC->myname, p2SIRC->l1int);
            fflush(stdout);
            exit(-100);
        }

        if(p2SIRC->num_ints > 32)
        {
            printf("%s: Number of interrupts invalid (%d).  Must be <= 32\n", p2SIRC->myname, p2SIRC->num_ints);
            fflush(stdout);
            exit(-100);
        }

        pair<unsigned int, unsigned int> addressRange;

        // SIRC has 9 registers, each 4 bytes long.
        stat = simPtr->AddBusAccessCallback((void *) p2SIRC, p2SIRC->reg_base, p2SIRC->reg_base + (9 * 4 - 1), SIRCBusAccess);

        printf("%s registered: register base = 0x%08x, L1 int = %d, interrupt base = 0x%04x, num_ints = %d\n",
               p2SIRC->myname, p2SIRC->reg_base, p2SIRC->l1int, p2SIRC->int_base, p2SIRC->num_ints);
        fflush(stdout);

        return p2SIRC;
    }

    void INTERFACE UnRegisterCosim(void *me)
    {
        //Should remove form MemWriteList,
        //For now don't remove from memory list
        //m_HW->RemoveFromMemWriteList();
        SIRC *ME = (SIRC *) me;

        delete ME;
    }

    char INTERFACE *GetCosimVersion(void)
    {
        return (char *) HEXAGON_WRAPPER_VERSION;
    }
}
