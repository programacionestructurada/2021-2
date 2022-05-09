/**IntorProg_data.c*/
#define LENGTH(bidarr)  (sizeof(bidarr)/sizeof(bidarr[0]))
#define FRAMEOUTFILE    "Principal_Frameset.html"
#define OUTFILE "IntroProg_Table_of_Contents.html"
#define RIGHTFRAMEHTMLFILE  "Rel_Tema_PPTX.html"
#define UNIDADDAPRENDIZAJE  "INTRODUCCI&Oacute;N A LA PROGRAMACI&Oacute;N"

char Unidad[][128] = {
  "U00 Unit name",
  "U01 Introducci&oacute;n a la Programaci&oacute;n",
  "U02 Estructuras de Control y Aplicaciones con Arreglos",
  "U03 Manejo de Funciones y Cadenas",
  "U04 Manejo de Apuntadores y Estructuras",
  "U05 Manejo de Archivos y Puertos",
};

struct UnidadTema unidad_tema[10];

char unidad01_tema[][128] = {
 "0.0",
 "1.1 Estructura de un Programa en C",
 "1.2 Uso de variables y constantes",
 "1.3 Creaci&oacute;n de c&ocacute;digo fuente, ejecutable y objeto",
 "1.4 Operadores",
 "1.5 Expresiones simples y complejas"
};
char unidad01_tema_ancla[][128] = {
 "0.0",
 "1.1",
 "1.2",
 "1.3",
 "1.4",
 "1.5"
};
char unidad01_tema_presentacion[][128] = {
 "0.0",
 "1.1 Unidad_01_Introduccion_a_la_programacion_2.pptx",
 "1.2 Unidad_01_Introduccion_a_la_programacion_2.pptx",
 "1.3 Unidad_01_Introduccion_a_la_programacion_2.pptx",
 "1.4 Unidad_01_Introduccion_a_la_programacion_2.pptx",
 "1.5 Unidad_01_Introduccion_a_la_programacion_2.pptx"
};
char unidad02_tema[][128] = {
 "2.0",
 "2.1 Diagramas de flujo",
 "2.2 Sentencias de control",
 "2.3 Tipos de Arreglos",
 "2.4 Aplicaciones con arreglos"
};
char unidad02_tema_ancla[][128] = {
 "2.0",
 "2.1",
 "2.2",
 "2.3",
 "2.4"
};
char unidad02_tema_presentacion[][128] = {
 "2.0",
 "2.1 Unidad_02_Estructuras_de_Control_y_Apps_con_Arreglos.pptx\
 (INCOMPLETA)",
 "2.2 Unidad_02_Estructuras_de_Control_y_Apps_con_Arreglos.pptx\
 (INCOMPLETA)",
 "2.3 2_3_1_Arreglos_Unidimensionales__Ejercicios.pptx\
 (INCOMPLETA)",
 "2.4"
};
char unidad03_tema[][128] = {
 "3.0",
 "3.1 Funciones",
 "3.2 Cadenas",
};
char unidad03_tema_ancla[][128] = {
 "3.0",
 "3.3",
 "3.3"
};
char unidad03_tema_presentacion[][128] = {
 "3.0",
 "3.1 U3_Manejo_de_Funciones_y _Cadenas__3_1_Funciones.pptx",
 "3.2 U3_Manejo_de_Funciones_y _Cadenas__3_2_Cadenas.pptx"
};
char unidad04_tema[][128] = {
 "4.0",
 "4.1 Apuntadores y variables",
 "4.1 Estructuras"
};
char unidad04_tema_ancla[][128] = {
 "4.0",
 "4.1",
 "4.2"
};
char unidad04_tema_presentacion[][128] = {
 "4.0",
 "4.1 U4_Manejo_de_Apuntadores_y _Estructuras__\
4_1_Apuntadores_y_variables.pptx",
 "4.2 U4_Manejo_de_Apuntadores_y _Estructuras__\
4_2_Estructuras.pptx"
};
char unidad05_tema[][128] = {
 "5.0",
 "5.1 Puertos (serie y paralelo)",
 "5.2 Archivos"
};
char unidad05_tema_ancla[][128] = {
 "5.0",
 "5.1",
 "5.2"
};
char unidad05_tema_presentacion[][128] = {
 "5.0",
 "5.1",
 "5.2"
};

void init_unidad_tema_array()
{
 short i;
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
}

void create_html_files()
{
 short i,j;
 FILE *cfPtr;
 init_unidad_tema_array();
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
   fprintf(cfPtr,"%s\n","<STYLE> P{COLOR:WHITE}</STYLE>");
   fprintf(cfPtr,"%s\n","</HEAD>");
   fprintf(cfPtr,"%s\n","<BODY BGCOLOR=\"WHITE\" TEXT=\"BLACK\">");
   fprintf(cfPtr,"<H1>%s</H1>\n",UNIDADDAPRENDIZAJE);
   for (i=1;i<LENGTH(Unidad);i++){
     fprintf(cfPtr,"<H2>%s</H2>\n",Unidad[i]);
     for (j=1;j<unidad_tema[i].numdtemas;j++){
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
   fprintf(cfPtr,"%s\n","<BODY BGCOLOR=\"BLACK\" TEXT=\"WHITE\">");
   fprintf(cfPtr,"<H1>%s</H1>\n",UNIDADDAPRENDIZAJE);
   for (i=1;i<LENGTH(Unidad);i++){
     fprintf(cfPtr,"<H2>%s</H2>\n",Unidad[i]);
     for (j=1;j<unidad_tema[i].numdtemas;j++){
       fprintf(cfPtr,
               "<H2><A NAME=%s>%s</A></H2>\n",
               unidad_tema[i].Tema_Ancla[j],
               unidad_tema[i].Tema_Presentacion[j]);
     }
   }
   fprintf(cfPtr,"%s\n","</BODY>");
   fprintf(cfPtr,"%s\n","</HTML>");
   fclose(cfPtr); // fclose closes file
 }
}


