/**Test_ConjDInts.c */
#include <stdio.h>
#include <stdlib.h>
#include <common.h>
#include <conio2.h>
extern ConjDInt SetA;
extern ConjDInt SetB;
extern int *p,*q;
void inicializar();

//bool pertenece(ConjDInt *cPt,int elemento){
// //int elemento = 8;
// int i=0;
// while(i < cPt->N){
//   if (elemento == cPt->S[i]) {
//     //printf("%5d",cPt->S[i]);break;
//     return true;
//   }
//   i++;
// }
// return false;
//}/*end pertenece()*/

int main(){
 printf("CONJUNTOS DE ENTEROS\n\n");
 inicializar();
 printf("Conjunto A:\n");
 print_ConjDInt(&SetA);printf("\n\n");
 printf("Conjunto B:\n");
 print_ConjDInt(&SetB);printf("\n\n");
 if (pertenece(&SetA,2)){
   printf("2 si est\\'a en el conjunto A\n");
 }else{
   printf("2 no est\\'a en el conjunto A\n");
 }
 if (pertenece(&SetB,5)){
   printf("5 si est\\'a en el conjunto B\n");
 }else{
   printf("5 no est\\'a en el conjunto B\n");
 }

// printf("Cardinalidad del conjunto SetA: %3u\n",SetA.N);
// printf("Apuntador de SetA: %X\n",(uint)SetA.S);
// printf("Elementos de SetA: %5d%5d%5d%5d%5d\n",
// //*(SetA.S+0),*(SetA.S+1),*(SetA.S+2),*(SetA.S+3),*(SetA.S+4));
//   SetA.S[0],  SetA.S[1],  SetA.S[2],  SetA.S[3],  SetA.S[4]);
 ConjDInt *cPt = &SetA;
// printf("Elementos de SetA: %5d%5d%5d%5d%5d\n",
//    (*cPt).S[0],*((*cPt).S+1),*(cPt->S+2),cPt->S[3],cPt->S[4]);

 printf("\n");
 printf("SetA U SetB:\n");
 ConjDInt *R = union_dconj(cPt,&SetB);
 print_ConjDInt(R);free(R);
 R = union_dconj(&SetA,&SetA);
 printf("\n\nSetA U SetA:\n");
 print_ConjDInt(R);
 printf("\n\n");

 free(p);
 free(q);
 free(R);
 return 0;
}/*end main()*/

//bool pertenece(ConjDInt *A,int elem){
// while((ConjDInt) != A){
//    printf("True");
// }
//}
