#ifndef PO_DIANUMDLAB_H_INCLUDED
#define PO_DIANUMDLAB_H_INCLUDED
#define LENGTH(A)   (sizeof(A)/sizeof(A[0]))
#define SIZE_OF_CHAR_ARRAY  64
/**Par Ordenado D\'ia N\'umero de Laboratorio*/
////////////////////////////////////////////////////////////////////////
//struct PO_DiaNumDLab {
// //char cadena[16];
// char cadena[];
// short NumDLab;
//};
//PO_DiaNumDLab.h:7:7: error: flexible array member not at end of struct
////////////////////////////////////////////////////////////////////////
struct PO_DiaNumDLab {
 short NumDLab;
 char cadena[];
};

struct PO_NumDLab_Days {
 short num_d_lab;
 //char char_arr[SIZE_OF_CHAR_ARRAY];
 char char_arr[];
};

//Definici\'on de tipo apuntador a funci\'on que recibe un
// entero corto y devuelve un apuntador a arreglo de caracteres
typedef char (*funcion_LIntroProg_Inv_t(short ndl))[];

struct ImageOfASetUnderFunction {
 short num_DVals;
 short *Vals;
 char set_of_vals[SIZE_OF_CHAR_ARRAY];
};

#endif // PO_DIANUMDLAB_H_INCLUDED
