/**use_fprintf.c
 * REF: C How to Program - C How to Program. With an Introduction
 * to C++ - Pearson International (2016).pdf,
 * Chapter 11 C File Processing, page 476 (477/1006).
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "UnidadTema.h"
#define LENGTH(bidarr)  (sizeof(bidarr)/sizeof(bidarr[0]))

#include "PyE_data.c"
int main(int argc,char *argv[])
{
 short i,j;
 FILE *cfPtr;
 unidad_tema[1].numdtemas = LENGTH(unidad01_tema);
 for (i=0;i<LENGTH(unidad01_tema);i++){
   strcpy(unidad_tema[1].Tema[i],unidad01_tema[i]);
   strcpy(unidad_tema[1].Tema_Ancla[i],unidad01_tema_ancla[i]);
   strcpy(unidad_tema[1].Tema_Presentacion[i],unidad01_tema_presentacion[i]);
 }
 unidad_tema[2].numdtemas = LENGTH(unidad02_tema);
 for (i=0;i<LENGTH(unidad02_tema);i++){
   strcpy(unidad_tema[2].Tema[i],unidad02_tema[i]);
   strcpy(unidad_tema[2].Tema_Ancla[i],unidad02_tema_ancla[i]);
   strcpy(unidad_tema[2].Tema_Presentacion[i],unidad02_tema_presentacion[i]);
 }
 unidad_tema[3].numdtemas = LENGTH(unidad03_tema);
 for (i=0;i<LENGTH(unidad03_tema);i++){
   strcpy(unidad_tema[3].Tema[i],unidad03_tema[i]);
   strcpy(unidad_tema[3].Tema_Ancla[i],unidad03_tema_ancla[i]);
   strcpy(unidad_tema[3].Tema_Presentacion[i],unidad03_tema_presentacion[i]);
 }
 unidad_tema[4].numdtemas = LENGTH(unidad04_tema);
 for (i=0;i<LENGTH(unidad04_tema);i++){
   strcpy(unidad_tema[4].Tema[i],unidad04_tema[i]);
   strcpy(unidad_tema[4].Tema_Ancla[i],unidad04_tema_ancla[i]);
   strcpy(unidad_tema[4].Tema_Presentacion[i],unidad04_tema_presentacion[i]);
 }
 unidad_tema[5].numdtemas = LENGTH(unidad05_tema);
 for (i=0;i<LENGTH(unidad05_tema);i++){
   strcpy(unidad_tema[5].Tema[i],unidad05_tema[i]);
   strcpy(unidad_tema[5].Tema_Ancla[i],unidad05_tema_ancla[i]);
   strcpy(unidad_tema[5].Tema_Presentacion[i],unidad05_tema_presentacion[i]);
 }
 unidad_tema[6].numdtemas = LENGTH(unidad06_tema);
 for (i=0;i<LENGTH(unidad06_tema);i++){
   strcpy(unidad_tema[6].Tema[i],unidad06_tema[i]);
   strcpy(unidad_tema[6].Tema_Ancla[i],unidad06_tema_ancla[i]);
   strcpy(unidad_tema[6].Tema_Presentacion[i],unidad06_tema_presentacion[i]);
 }
 unidad_tema[7].numdtemas = LENGTH(unidad07_tema);
 for (i=0;i<LENGTH(unidad07_tema);i++){
   strcpy(unidad_tema[7].Tema[i],unidad07_tema[i]);
   strcpy(unidad_tema[7].Tema_Ancla[i],unidad07_tema_ancla[i]);
   strcpy(unidad_tema[7].Tema_Presentacion[i],unidad07_tema_presentacion[i]);
 }
 unidad_tema[8].numdtemas = LENGTH(unidad08_tema);
 for (i=0;i<LENGTH(unidad08_tema);i++){
   strcpy(unidad_tema[8].Tema[i],unidad08_tema[i]);
   strcpy(unidad_tema[8].Tema_Ancla[i],unidad08_tema_ancla[i]);
   strcpy(unidad_tema[8].Tema_Presentacion[i],unidad08_tema_presentacion[i]);
 }
 unidad_tema[9].numdtemas = LENGTH(unidad09_tema);
 for (i=0;i<LENGTH(unidad09_tema);i++){
   strcpy(unidad_tema[9].Tema[i],unidad09_tema[i]);
   strcpy(unidad_tema[9].Tema_Ancla[i],unidad09_tema_ancla[i]);
   strcpy(unidad_tema[9].Tema_Presentacion[i],unidad09_tema_presentacion[i]);
 }

 if (( cfPtr = fopen(FRAMEOUTFILE, "w") ) == NULL) {
   fprintf(stderr,"File %s could not be opened\n",FRAMEOUTFILE);
 }else{
   fprintf(cfPtr,"%s\n","<HTML>");
   fprintf(cfPtr,"%s\n","<HEAD>");
   fprintf(cfPtr,"<TITLE>%s</TITLE>\n",UNIDADDAPRENDIZAJE);
   fprintf(cfPtr,"%s\n","</HEAD>");
   fprintf(cfPtr,"%s\n","<FRAMESET COLS=\"25\\\%,*\">");
   fprintf(cfPtr,"<FRAME SRC=\"%s\" NAME=\"MARCO_MENU\">\n",
           OUTFILE);
   fprintf(cfPtr,"<FRAME SRC=\"%s\" NAME=\"MARCO_PRINCIPAL\">\n",
           RIGHTFRAMEHTMLFILE);
   fprintf(cfPtr,"%s\n","</FRAMESET>");
   fprintf(cfPtr,"%s\n","</HTML>");
   fclose(cfPtr); // fclose closes file
 }
 // fopen opens file. Exit program if unable to create file
 if (( cfPtr = fopen(OUTFILE, "w") ) == NULL) {
   fprintf(stderr,"File %s could not be opened\n",OUTFILE);
 }else{
   fprintf(cfPtr,"%s\n","<HTML>");
   fprintf(cfPtr,"%s\n","<HEAD>");
   fprintf(cfPtr,"<TITLE>%s</TITLE>\n",UNIDADDAPRENDIZAJE);
   fprintf(cfPtr,"%s\n","</HEAD>");
   //fprintf(cfPtr,"%s\n","<BODY BGCOLOR=\"BLACK\" TEXT=\"WHITE\">");
   fprintf(cfPtr,"%s\n","<BODY BGCOLOR=\"WHITE\" TEXT=\"BLACK\">");
   //fprintf(cfPtr,"%s\n","<BODY BGCOLOR=\"GRAY\" TEXT=\"WHITE\">");
   //fprintf(cfPtr,"%s\n","<BODY BGCOLOR=\"BLACK\" TEXT=\"BLUE\">");
   fprintf(cfPtr,"<H1>%s</H1>\n",UNIDADDAPRENDIZAJE);
   for (i=1;i<LENGTH(Unidad);i++){
     fprintf(cfPtr,"<H2>%s</H2>\n",Unidad[i]);
//     if (i==1){
//       for (j=1;j<unidad_tema[1].numdtemas;j++){
//         fprintf(cfPtr,"<H3>%s</H3>\n",unidad_tema[1].Tema[j]);
//       }
//     }
//     if (i==2){
//       for (j=1;j<unidad_tema[2].numdtemas;j++){
//         fprintf(cfPtr,"<H3>%s</H3>\n",unidad_tema[2].Tema[j]);
//       }
//     }
//     if (i==3){
//       for (j=1;j<unidad_tema[3].numdtemas;j++){
//         fprintf(cfPtr,"<H3>%s</H3>\n",unidad_tema[3].Tema[j]);
//       }
//     }
//     if (i==4){
//       for (j=1;j<unidad_tema[4].numdtemas;j++){
//         fprintf(cfPtr,"<H3>%s</H3>\n",unidad_tema[4].Tema[j]);
//       }
//     }
     for (j=1;j<unidad_tema[i].numdtemas;j++){
       //fprintf(cfPtr,"<H3>%s</H3>\n",unidad_tema[i].Tema[j]);
       fprintf(cfPtr,
               "<P><B><A HREF=%s#%s TARGET=\"MARCO_PRINCIPAL\">%s</A></B></P>\n",
               RIGHTFRAMEHTMLFILE,
               unidad_tema[i].Tema_Ancla[j],
               unidad_tema[i].Tema[j]);
     }
   }
   fprintf(cfPtr,"%s\n","</BODY>");
   fprintf(cfPtr,"%s\n","</HTML>");
   fclose(cfPtr); // fclose closes file
 }
  // fopen opens file. Exit program if unable to create file
 if (( cfPtr = fopen(RIGHTFRAMEHTMLFILE, "w") ) == NULL) {
   fprintf(stderr,"File %s could not be opened\n",
           RIGHTFRAMEHTMLFILE);
 }else{
   fprintf(cfPtr,"%s\n","<HTML>");
   fprintf(cfPtr,"%s\n","<HEAD>");
   fprintf(cfPtr,"<TITLE>%s</TITLE>\n",UNIDADDAPRENDIZAJE);
   fprintf(cfPtr,"%s\n","</HEAD>");
   //fprintf(cfPtr,"%s\n","<BODY BGCOLOR=\"BLACK\" TEXT=\"WHITE\">");
   //fprintf(cfPtr,"%s\n","<BODY BGCOLOR=\"WHITE\" TEXT=\"BLACK\">");
   //fprintf(cfPtr,"%s\n","<BODY BGCOLOR=\"GRAY\" TEXT=\"WHITE\">");
   fprintf(cfPtr,"%s\n","<BODY BGCOLOR=\"BLACK\" TEXT=\"WHITE\">");
   fprintf(cfPtr,"<H1>%s</H1>\n",UNIDADDAPRENDIZAJE);
   for (i=1;i<LENGTH(Unidad);i++){
     fprintf(cfPtr,"<H2>%s</H2>\n",Unidad[i]);
     for (j=1;j<unidad_tema[i].numdtemas;j++){
       fprintf(cfPtr,
               "<H2><A NAME=%s>%s</A></H2><BR><BR><BR><BR>\n",
               unidad_tema[i].Tema_Ancla[j],
               unidad_tema[i].Tema_Presentacion[j]);
     }
   }
   fprintf(cfPtr,"%s\n","</BODY>");
   fprintf(cfPtr,"%s\n","</HTML>");
   fclose(cfPtr); // fclose closes file
 }
 return 0;
}
