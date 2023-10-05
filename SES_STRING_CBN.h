#ifndef _SES_STRING_CBN_H
#define _SES_STRING_CBN_H

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

typedef struct{
    UINT16 InID; 
    UINT32 InEvt;
    float IDCStr, inDCAhr, VdStr, PdcStr, EpStr, InDCPR, InN, Tstr;
}SES_STRING_CBN;

#endif