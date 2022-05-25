/**PO_DiaNumDLab.h*/
#ifndef PO_DIANUMDLAB_H_INCLUDED
#define PO_DIANUMDLAB_H_INCLUDED

struct PO_DiaNumDLab {
 short NumDLab;
 char cadena[];
};

struct PO_NumDLab_Days {
 short num_d_lab;
 //char char_arr[SIZE_OF_CHAR_ARRAY];
 char char_arr[];
};

#endif // PO_DIANUMDLAB_H_INCLUDED
