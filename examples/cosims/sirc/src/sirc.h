#ifndef __SIRC_H
#define __SIRC_H

#include "HexagonWrapper.h"

class SIRC
{
private:
public:
    SIRC(HexagonWrapper *pHW);
    ~SIRC();

    void AssignValue(unsigned int *result, HEX_1u_t *value, int numBytes, unsigned int startAddr, unsigned int addr);
    HEX_8u_t GetValue(unsigned int reg, int numBytes, unsigned int startAddr, unsigned int addr);
    void setReadValue(HEX_4u_t *regAddr, HEX_1u_t **dataptr, HEXAPI_BusAccessType bat);

    int ValidateArgs(char *args);

    // Register definitions
#define ADSP_SRCx_INT_ENABLE       (tc->reg_base + 0x00)
#define ADSP_SRCx_INT_ENABLE_CLEAR (tc->reg_base + 0x04)
#define ADSP_SRCx_INT_ENABLE_SET   (tc->reg_base + 0x08)
#define ADSP_SRCx_INT_TYPE         (tc->reg_base + 0x0c)
#define ADSP_SRCx_INT_POLARITY     (tc->reg_base + 0x10)
#define ADSP_SRCx_IRQ_STATUS       (tc->reg_base + 0x14)
#define ADSP_SRCx_INT_CLEAR        (tc->reg_base + 0x18)
#define ADSP_SRCx_SOFT_INT         (tc->reg_base + 0x1c)
#define ADSP_SRCx_IRQ_PENDING      (tc->reg_base + 0x20)

    char myname[50];

    int cycle_count;
    int m_sum;

    unsigned int m_int_enable;
    unsigned int m_int_enable_clear;
    unsigned int m_int_enable_set;
    unsigned int m_int_type;
    unsigned int m_int_polarity;
    unsigned int m_irq_status;
    unsigned int m_int_clear;
    unsigned int m_soft_int;
    unsigned int m_irq_pending;
    HexagonWrapper *m_HW;

    unsigned int l1int, int_base, num_ints;
    HEX_PA_t reg_base;
};
#endif // __SIRC_H
