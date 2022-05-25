/**PO_DiaNumDLab.h*/
#ifndef PO_DIANUMDLAB_H_INCLUDED
#define PO_DIANUMDLAB_H_INCLUDED
#include <limits.h>
#include <stdio.h>
#define LENGTH(A)   (sizeof(A)/sizeof(A[0]))

struct PO_DiaNumDLab {
 short NumDLab;
 char cadena[];
};

struct PO_NumDLab_Days {
 short num_d_lab;
 //char char_arr[SIZE_OF_CHAR_ARRAY];
 char char_arr[];
};
/**Definition of type pointer to char array */
typedef char (*char_array_pt_t)[];
#define MAX_LENGTH  SHRT_MAX
char (*tokenizer(char str[],size_t *tokens_nr))[][16];
typedef char (*two_dim_char_array_pt_t)[][16];
#endif // PO_DIANUMDLAB_H_INCLUDED
