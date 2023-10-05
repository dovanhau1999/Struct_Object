#ifndef _SES_PD_H
#define _SES_PD_H

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
    float SAW_ID1, SAW_ID2, SAW_ID3, SAW_ID4, SAW_ID5, SAW_ID6;
    float GR_A_MEANSURE;
    UINT16 GR_A_ALARM;
    float GR_B_MEANSURE;
    UINT16 GR_B_ALARM;
    UINT16 ALARM_STT;
    float LFB_RATIO, LFB_EPPC, MFB_RATIO, MFB_EPPC, HFB_RATIO, HFB_EPPC, MEAN_RATIO, MEAN_EPPC, RATIOxEPPC_Hi, RATIOxEPPC_Lo;
    float T, H, Uab, Ubc, Uca, Ull, Uan, Ubn, Ucn, Uln, Ia, Ib, Ib, Ic, In, Ig, Iavg;
    float Pa, Pb, Pc, Pt, Qa, Qb, Qc, Qt, Sa, Sb, Sc, St, F;
    UINT64 EP, EQ, ES;
    float THD_Ia, THD_Ib, THD_IC, THD_In, THD_Ig;
    float THD_Vab, THD_Vbc, THD_Vca, THD_Vca, THD_Vll, THD_Van, THD_Vbn, THD_Vcn, THD_Vln;
}SES_PD;

#endif