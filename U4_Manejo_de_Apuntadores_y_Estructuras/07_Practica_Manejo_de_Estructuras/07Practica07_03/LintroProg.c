/**LintroProg.c*/
#include <string.h>
#include <limits.h>  /** SHRT_MAX */
#include <stdbool.h>
#define NDEBUG
#include <assert.h>
#include "PO_DiaNumDLab.h"

struct PO_DiaNumDLab PO_DNdL_0 = {0,"DOMINGO"};
struct PO_DiaNumDLab PO_DNdL_1 = {4,"LUNES"};
struct PO_DiaNumDLab PO_DNdL_2 = {0,"MARTES"};
struct PO_DiaNumDLab PO_DNdL_3 = {4,"MIERCOLES"};
struct PO_DiaNumDLab PO_DNdL_4 = {1,"JUEVES"};
struct PO_DiaNumDLab PO_DNdL_5 = {0,"VIERNES"};
struct PO_DiaNumDLab PO_DNdL_6 = {0,"SABADO"};

/**Arreglo de apuntadores a estructura*/
struct PO_DiaNumDLab *LIntroProg[] = {
/*0*/ &PO_DNdL_0,
/*1*/ &PO_DNdL_1,
/*2*/ &PO_DNdL_2,
/*3*/ &PO_DNdL_3,
/*4*/ &PO_DNdL_4,
/*5*/ &PO_DNdL_5,
/*6*/ &PO_DNdL_6
};
#define SAMPLE_SPACE_CARDINALITY    LENGTH(LIntroProg)

/**
 funcion_LIntroProg - Devuelve el n\'umero de laboratorio
 correspondiente al d\'ia que se recibe como argumento.
 @pre: El arreglo dia debe contener el nombre de uno de
 los d\'ias de la semana en espa\~nol.
*/
short funcion_LIntroProg(char dia[16])
{
 short index;
 char DIA[][16] = {"DOMINGO","LUNES","MARTES","MIERCOLES",
 "JUEVES","VIERNES","SABADO"};
 for(index=0;index<(sizeof(DIA)/sizeof(DIA[0]));index++){
   if(!strcmp(dia,DIA[index])){/**``Los d\'ias son iguales''*/
     return LIntroProg[index]->NumDLab;
   }
 }
 return -1;
}

struct PO_NumDLab_Days PO_NumDLab_Days_Empty = {SHRT_MIN,"{ }"};
struct PO_NumDLab_Days PO_NumDLab_Days_0 = {0,"{DOMINGO,MARTES,VIERNES,SABADO}"};
struct PO_NumDLab_Days PO_NumDLab_Days_1 = {1,"{JUEVES}"};
struct PO_NumDLab_Days PO_NumDLab_Days_4 = {4,"{LUNES,MIERCOLES}"};

struct PO_NumDLab_Days *LIntroProgInv[] = {
/*0*/ &PO_NumDLab_Days_0,
/*1*/ &PO_NumDLab_Days_1,
/*2*/ &PO_NumDLab_Days_4
};

/**Ejemplo de una funci\'on que recibe un entero corto y devuelve
 * un apuntador a un arreglo de caracteres.
 */
//char (*p)[] funcion_LIntroProg_Inv(short ndl)
//char (*funcion_LIntroProg_Inv(short ndl))[SIZE_OF_CHAR_ARRAY]
char (*funcion_LIntroProg_Inv(short ndl))[]
{
 short index;
 char NDL[] = {0,1,4};
 for(index=0;index<(sizeof(NDL)/sizeof(NDL[0]));index++){
   if(ndl==NDL[index]){/**``si hemos encontrado el \'indice correcto''*/
     return &(LIntroProgInv[index]->char_arr);
   }
 }
 return &(PO_NumDLab_Days_Empty.char_arr);
}
#if 0//LMC 2022.05.17
char_array_pt_t union_de_dias(char str1[],char str2[])
{
 size_t i;
 static char array[MAX_LENGTH] = {'\0'};
 char_array_pt_t char_array_pt;
 strcpy(array,str1);
 two_dim_char_array_pt_t two_dim_char_array_pt;
 two_dim_char_array_pt = tokenizer(str2);
 size_t CHANGE_ME = 2;
 for (i=0;i<CHANGE_ME;i++){
    if (!is_element((*two_dim_char_array_pt)[i])){
        strcat(array,(*two_dim_char_array_pt)[i]);
    }
 }
 return &array;
}
#else
char_array_pt_t union_de_dias(char str1[], char str2[])
{
 //size_t i,j,n1,n2,i_for_comm_loop;
 size_t i,j,n1,n2;
 static char array[SHRT_MAX] = {'\0'};
 char arr_1[][16] = {
 /**0*/"",
 /**1*/"",
 /**2*/"",
 /**3*/"",
 /**4*/"",
 /**5*/"",
 /**6*/"",
 /**7*/""
 };
 char arr_2[][16] = {
 /**0*/"",
 /**1*/"",
 /**2*/"",
 /**3*/"",
 /**4*/"",
 /**5*/"",
 /**6*/"",
 /**7*/""
 };

 two_dim_char_array_pt_t two_dim_char_array_pt1 = tokenizer(str1,&n1);
#ifndef NDEBUG
 for(i=0;strcmp((*two_dim_char_array_pt1)[i],"");i++){
 printf("[A union_de_dias()]:%s\n",(*two_dim_char_array_pt1)[0]);}
#endif // NDEBUG
 for (i=0;strcmp((*two_dim_char_array_pt1)[i],"");i++) {
   strcpy(arr_1[i],(*two_dim_char_array_pt1)[i]);
 }
#ifndef NDEBUG
 printf("[B union_de_dias()]:%s\n",arr_1[0]);
#endif // NDEBUG
 two_dim_char_array_pt1 = &arr_1;
#ifndef NDEBUG
 printf("[C union_de_dias()]:%s\n",(*two_dim_char_array_pt1)[0]);
#endif // NDEBUG
 two_dim_char_array_pt_t two_dim_char_array_pt2 = tokenizer(str2,&n2);
#ifndef NDEBUG
 printf("Array (*two_dim_char_array_pt2)[][16]\n");
 for (i_for_comm_loop=0;i_for_comm_loop<n2;i_for_comm_loop++){
   printf("%s\n",(*two_dim_char_array_pt2)[i_for_comm_loop]);
 }

#endif // NDEBUG
 for (i=0;strcmp((*two_dim_char_array_pt2)[i],"");i++) {
   strcpy(arr_2[i],(*two_dim_char_array_pt2)[i]);
 }
 two_dim_char_array_pt2 = &arr_2;
 assert(n1==4);assert(n2==1);

#if 0//LMC 2022.05.19
 for (i=0;strcmp((*two_dim_char_array_pt1)[i],"");i++) {
   for (j=0;strcmp((*two_dim_char_array_pt1)[j],"");j++) {
     if(strcmp((*two_dim_char_array_pt1)[i],(*two_dim_char_array_pt2)[j])) {
       strcpy((*two_dim_char_array_pt1)[n1++],(*two_dim_char_array_pt2)[j]);
     }
   }
 }
#else
 bool included = false;
 //for (i=0;strcmp(arr_1[i],"");i++) {
   for (j=0;strcmp(arr_2[j],"");j++) {
     for (i=0;strcmp(arr_1[i],"");i++) {
       if(!strcmp(arr_1[i],arr_2[j])) {
         included = true;
         break;
       }
     }
     if(!included) {
       strcpy(arr_1[n1++],arr_2[j]);
       included = false;
     }
   }
 //}
#endif // 0
 /**Reacondicionando el arreglo static char array*/
 for (i=0;i<LENGTH(array);i++) {
   array[i]='\0';
 }
 /**It's all set? Now we get the result of union operation*/
 two_dim_char_array_pt1 = &arr_1;
 array[0] = '{';
 for (i=0;i<n1;i++) {
   if ((i)&&(strcmp((*two_dim_char_array_pt1)[i],""))) {
#ifndef NDEBUG
     printf("[D union_de_dias()]:i=%li,%s\n",i,(*two_dim_char_array_pt1)[i]);
#endif // NDEBUG
     strcat(array,",");
   }
   strcat(array,(*two_dim_char_array_pt1)[i]);
 }
 strcat(array,"}");
#ifndef NDEBUG
 //printf("\n{LUNES}U{MARTES}=%s\n",array);
 //printf("\n{JUEVES}U{LUNES,MIERCOLES}=%s\n",array);
#endif // NDEBUG
 return &array;
}
#endif
/**Stub? Maybe NOT anymore! V&G
 * "{LUNES,MIERCOLES}"\mapsto
 * {"LUNES","MIERCOLES"}
 * @param str una cadena de la forma
 *        "{[DAYNAME0][,DAYNAME1],...[,DAYNAME6]}"
 * @pre:  debe ser una cadena de la forma
 *        "{[DAYNAME0][,DAYNAME1],...[,DAYNAME6]}"
 */
char (*tokenizer(char str[],size_t *tokens_nr))[][16]
{
 size_t i,j,k;
 short comma_index[SAMPLE_SPACE_CARDINALITY] = {-1};
 short brace_index[] = {-1,-1};
 bool empty = true;
 short z;
#ifndef NDEBUG
 static short witness=1;
#endif // NDEBUG
 static char arr[][16] = {
/**0*/"",
/**1*/"",
/**2*/"",
/**3*/"",
/**4*/"",
/**5*/"",
/**6*/"",
/**7*/""/**Here is a convention, function
           char_arr_pt_t union_de_dias(char str1[], char str2[])
           waits for/depends on the existence this empty strings.
         */
 };
 *tokens_nr = 0;
 for(z=0;z<LENGTH(comma_index);z++){comma_index[z]=-1;}
 /**Reacondicionando el arreglo static arr*/
 for (i=0;i<LENGTH(arr);i++) {
   strcpy(arr[i],"");
 }

 /**Obteniendo los \'indices donde hay comas*/
 i=j=0;{
   while ((str[i] != '\0')&&(j<LENGTH(comma_index))) {
     if (str[i]==','){
       comma_index[j++]=i;
       *tokens_nr = *tokens_nr + 1;
     }
     i++;
   }
   /**Obteniendo los \'indices donde hay llaves*/
   i=0;
   while ((str[i] != '\0')&&(j<LENGTH(comma_index))) {
   //while (str[i] != '\0')) {
     switch(str[i]){
       case '{':{brace_index[0] = i;break;}
       case '}':{brace_index[1] = i;comma_index[j]=i;break;}
       default: break;
     }
     i++;
   }
 }
 /**Detectando si str es el conjunto vacio*/
 for (i=brace_index[0]+1;i<brace_index[1];i++) {
   if (str[i]!=' ') {
     empty = false;
     break;
   }
 }

#ifndef NDEBUG
// printf("========>[tokenizer()]*tokens_nr=%d\n",*tokens_nr);
// printf("========>[tokenizer()]witness=%d\n",witness);
#endif // NDEBUG
 //assert(1==0);
 if (!empty) {//while(!0){}
   *tokens_nr = *tokens_nr + 1;
 }

 //assert(2==0);
 /**Ahora colocamos los tokens en el arreglo static char arr[][16]*/
 i=0;k=1;
#ifndef NDEBUG
 printf("comma_index array elements: ");
 for(z=0;z<LENGTH(comma_index);z++){printf("%3i",comma_index[z]);}printf("\n");
#endif // NDEBUG
 //while (comma_index[i] != -1) {
 if (*tokens_nr>1)
 {//assert(3==0);
   while (comma_index[i] != -1) {
     for (j=k;j<comma_index[i];j++) {
#ifndef NDEBUG
   printf("Putting tokens at arr:i=%4i j=%4i k=%4i j-k=%4i\n",i,j,k,j-k);
   printf("[tokenizer()]*tokens_nr=%i\n",*tokens_nr);
   printf("arr[%d][%d]=str[%d];\n",i,j-k,j);
#endif // NDEBUG
     arr[i][j-k]=str[j];
#ifndef NDEBUG
   printf("Putting tokens at arr:i=%4i j=%4i\n",i,j);
   printf("[tokenizer()]*tokens_nr=%i\n",*tokens_nr);
#endif // NDEBUG
     }

     arr[i][j-k] = '\0';
     k = comma_index[i++]+1;
   //i++;
   }//if(witness==2){assert(1==0);}
 }
#ifndef NDEBUG
 printf("Array arr[][16]\n");
 for (z=0;z<*tokens_nr;z++){
   printf("%s\n",arr[z]);
 }
#endif // NDEBUG

 if (*tokens_nr == 1) {
   k = brace_index[0]+1;
#ifndef NDEBUG
 printf("brace_index[0]=%i\n",brace_index[0]);
 printf("brace_index[1]=%i\n",brace_index[1]);
#endif // NDEBUG
   for (j=k;j<brace_index[1];j++) {
#ifndef NDEBUG
putchar(str[j]);
#endif // NDEBUG
     arr[0][j-k]=str[j];
   }
   arr[0][j-k] = '\0';
#ifndef NDEBUG
   for(i=0;i<*tokens_nr;i++){
   printf("[tokenizer()]:%s\n",arr[i]);}
#endif // NDEBUG
 }
#ifndef NDEBUG
   for(i=0;i<*tokens_nr;i++){
   printf("[Z tokenizer()]:i=%d %s\n",i,arr[i]);
   }
   witness++;
#endif // NDEBUG
 return &arr;
}/*end tokenizer()*/

