#ifndef _SES_INVERTER_
#define _SES_INVERTER_

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
    float I, Ia, Ib, Ic, Vab, Vbc, Vca, Va, Vb, Vc;
    float Pa, Pb, Pc, Pt, Qa, Qb, Qc, Qt, Sa, Sb, Sc, St;
    float F, PF, PFa, PFb, PBc;
    UINT64 Ep;
    float Idc, Udc, Pdc;
    UINT32 EpDC;
    float Tmp_Cab, Tmp_Snk, Tmp_Trns, tmp_Ot;
    UINT16 St;
    UINT32 Evt1, Tms;
    UINT16 PVConn, ECPConn, Conn;
    UINT64 Tm_Src;
    INT32 Wmax, VAMax, VArMaxQ1, VArMaxQ2, VArMaxQ3, VArMaxQ4; 
    float Vref, VRef_Ofs, WMaxLimPct, F_normal;
    UINT16 MaxLimPct_WinTms, MaxLimPct_RvrtTms, MaxLimPct_RmpTms, WMaxLim_Ena;
    float OutPFset;
    UINT16 OutPFSet_WinTms, OutPFSet_RvrtTms, OutPFSet_RmpTms, OutPFSet_Ena;
    float VArWMaxPct, VArMaxPct, VArAvalPct;
    UINT16 VarPct_WinTms, VarPct_RvrtTms, VarPct_RmpTms, VarPct_Mod, VarPct_Ena;

}SES_INVERTER;



#endif