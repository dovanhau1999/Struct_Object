#ifndef _SES_STRUCT_
#define _SES_STRUCT_

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
    float Uab, Ubc, Uca, Ull, Uan, Ubn, Ucn, Uln;
    float Ia, Ib, Ic, In, Ig, Iavg;
    float Pa, Pb, Pc, Pt, Qa, Qb, Qc, Qt, Sa, Sb, Sc, St;
    float PFa, PFb, PFc, PFavg;
    UINT16 F, EP, EQ, ES;
    float T1, T2, T3;
    float THD_Ia, THD_Ib, THD_IC, THD_In, THD_Ig;
    float THD_Vab, THD_Vbc, THD_Vca, THD_Vca, THD_Vll, THD_Van, THD_Vbn, THD_Vcn, THD_Vln;
    float VAN_H1, VAN_H2, VAN_H3, VAN_H4, VAN_H5, VAN_H6, VAN_H7, VAN_H8, VAN_H9, VAN_H10, VAN_H11, VAN_H12, VAN_H13, VAN_H14, VAN_H15, VAN_H16, VAN_H17, VAN_H18, VAN_H19, VAN_H20, VAN_H21, VAN_H22, VAN_H23, VAN_H24, VAN_H25, VAN_H26, VAN_H27, VAN_H28, VAN_H29, VAN_H30, VAN_H31; 
    float VBN_H1, VBN_H2, VBN_H3, VBN_H4, VBN_H5, VBN_H6, VBN_H7, VBN_H8, VBN_H9, VBN_H10, VBN_H11, VBN_H12, VBN_H13, VBN_H14, VBN_H15, VBN_H16, VBN_H17, VBN_H18, VBN_H19, VBN_H20, VBN_H21, VBN_H22, VBN_H23, VBN_H24, VBN_H25, VBN_H26, VBN_H27, VBN_H28, VBN_H29, VBN_H30, VBN_H31; 
    float VCN_H1, VCN_H2, VCN_H3, VCN_H4, VCN_H5, VCN_H6, VCN_H7, VCN_H8, VCN_H9, VCN_H10, VCN_H11, VCN_H12, VCN_H13, VCN_H14, VCN_H15, VCN_H16, VCN_H17, VCN_H18, VCN_H19, VCN_H20, VCN_H21, VCN_H22, VCN_H23, VCN_H24, VCN_H25, VCN_H26, VCN_H27, VCN_H28, VCN_H29, VCN_H30, VCN_H31; 
    float IA_H1, IA_H2, IA_H3, IA_H4, IA_H5, IA_H6, IA_H7, IA_H8, IA_H9, IA_H10, IA_H11, IA_H12, IA_H13, IA_H14, IA_H15, IA_H16, IA_H17, IA_H18, IA_H19, IA_H20, IA_H21, IA_H22, IA_H23, IA_H24, IA_H25, IA_H26, IA_H27, IA_H28, IA_H29, IA_H30, IA_H31; 
    float IA_H1, IA_H2, IA_H3, IA_H4, IA_H5, IA_H6, IA_H7, IA_H8, IA_H9, IA_H10, IA_H11, IA_H12, IA_H13, IA_H14, IA_H15, IA_H16, IA_H17, IA_H18, IA_H19, IA_H20, IA_H21, IA_H22, IA_H23, IA_H24, IA_H25, IA_H26, IA_H27, IA_H28, IA_H29, IA_H30, IA_H31; 
    float IC_H1, IC_H2, IC_H3, IC_H4, IC_H5, IC_H6, IC_H7, IC_H8, IC_H9, IC_H10, IC_H11, IC_H12, IC_H13, IC_H14, IC_H15, IC_H16, IC_H17, IC_H18, IC_H19, IC_H20, IC_H21, IC_H22, IC_H23, IC_H24, IC_H25, IC_H26, IC_H27, IC_H28, IC_H29, IC_H30, IC_H31; 
    INT32 VSg_Sw, ISg_Sw, I1_Crest, I2_Crest, I3_Crest, I_unbal, U_unbal;

}SES_MM_V2_110923;


#endif