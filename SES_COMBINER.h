#ifndef _SES_COMBINER_H_
#define _SES_COMBINER_H_

/* INT is processor specific in length may vary in size */
typedef signed int          INT;
typedef signed char         INT8;
typedef signed short int    INT16;
typedef signed long int     INT32;

/* UINT is processor specific in length may vary in size */
typedef unsigned int        UINT;
typedef unsigned char       UINT8;
typedef unsigned short int  UINT16;
typedef unsigned long int   UINT32;     /* other name for 32-bit integer */

typedef signed long long    INT64;
typedef unsigned long long  UINT64;

typedef struct {
    UINT16 DCAMax, N;
    UINT32 Evt;
    float IDC_CBN, DCAh, VDC_CBN, T, PDC_CBN, PR, Ep_CBN;
}SES_COMBINER;

#endif