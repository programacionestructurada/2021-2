/**PO_DiaNumDLab.h*/
#ifndef PO_DIANUMDLAB_H_INCLUDED
#define PO_DIANUMDLAB_H_INCLUDED
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
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
/**Conjunto De Integers */
struct ConjDInts {
 short canDElems; /**cantidad De Elementos*/
 short *Elem;     /**Elemento(s)*/
};
void print_ConjDInts(struct ConjDInts CdI,char sep);
bool is_element_from(struct ConjDInts *CdI,short value);

/**Definition of type pointer to char array */
typedef char (*char_array_pt_t)[];
#define MAX_LENGTH  SHRT_MAX
char (*tokenizer(char str[],size_t *tokens_nr))[][16];
typedef char (*two_dim_char_array_pt_t)[][16];

char (*ImagenInversaD_LIntroProg(struct ConjDInts CdI))[];
/**Imagen Directa De Laboratorio Introducci\'on a la Programaci\'on*/
struct ConjDInts *ImagenDirectaD_LIntroProg(char_array_pt_t char_array_pt);
#endif // PO_DIANUMDLAB_H_INCLUDED
