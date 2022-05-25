/**PyE_data.c*/
#define FRAMEOUTFILE    "Principal_Frameset.html"
#define OUTFILE "PyE_Table_of_Contents.html"
#define RIGHTFRAMEHTMLFILE  "Rel_Tema_PPTX.html"
#define UNIDADDAPRENDIZAJE  "PROBABILIDAD Y ESTAD&Iacute;STICA"

char Unidad[][128] = {
  "Unit name",
  "I. TEOR&Iacute;A DE PROBABILIDAD",
  "II. VARIABLES ALEATORIAS",
  "III. DISTRIBUCIONES DISCRETAS",
  "IV. DISTRIBUCIONES CONTINUAS",
  "V. DISTRIBUCI&Oacute;N NORMAL",
  "VI. ESTAD&Iacute;STICA DESCRIPTIVA",
  "VII. ESTIMACI&Oacute;N ESTAD&Iacute;STICA Y \
DISTRIBUCIONES DE MUESTREO",
  "VIII. INFERENCIAS EN UNA POBLACI&Oacute;N",
  "IX. INFERENCIAS DE DOS POBLACIONES"
};

struct UnidadTema unidad_tema[10];

char unidad01_tema[][128] = {
 "I.Z",
 "I.A CONCEPTO B&Aacute;SICO DE PROBABILIDAD",
 "I.B CONCEPTO DE EVENTO",
 "I.C COMBINACIONES DE EVENTOS",
 "I.D PROBABILIDAD CONDICIONAL",
 "I.E TEOREMA DE BAYES",
 "I.F T&Eacute;CNICAS DE CONTEO"
};
char unidad01_tema_ancla[][128] = {
 "I.Z",
 "I.A",
 "I.B",
 "I.C",
 "I.D",
 "I.E",
 "I.F"
};
char unidad01_tema_presentacion[][128] = {
 "I.Z",
 "I.A 00_U01_TeoriaDProbabilidad_Introduccion.pptx",
 "I.B 01_U01_Concepto_de_Evento_Combinaciones_de_Eventos.pptx",
 "I.C 01_U01_Concepto_de_Evento_Combinaciones_de_Eventos.pptx",
 "I.D 02_U01_Probabilidad_Condicional.pptx",
 "I.E 02_U01E_Teorema_de_Bayes.pptx",
 "I.F"
};
char unidad02_tema[][128] = {
 "II.Z",
 "II.A VARIABLES ALEATORIAS DISCRETAS",
 "II.B VARIABLES ALEATORIAS CONTINUAS",
 "II.C VALOR ESPERADO DE UNA VARIABLE ALEATORIA",
 "II.D PROBLEMAS DE VALOR ESPERADO DE LA VARIABLE \
ALEATORIA CONTINUA",
 "II.E VARIANZA DE UNA VARIABLE ALEATORIA DISCRETA",
 "II.F PROBLEMAS, VARIANZA DE LA VARIABLE ALEATORIA CONTINUA"
};
char unidad02_tema_ancla[][128] = {
 "II.Z",
 "II.A",
 "II.B",
 "II.C",
 "II.D",
 "II.E",
 "II.F"
};
char unidad02_tema_presentacion[][128] = {
 "II.Z",
 "II.A 03_U02_Variables_Aleatorias.pptx",
 "II.B 05_U02_B_VAs_Continuas.pptx",
 "II.C 03_U02_Variables_Aleatorias.pptx, 04_U02_D_Valor_Esperado.pptx",
 "II.D 04_U02_D_Valor_Esperado.pptx, 05_U02_B_VAs_Continuas.pptx",
 "II.E 04_U02_D_Valor_Esperado.pptx",
 "II.F 05_U02_B_VAs_Continuas.pptx"
};
char unidad03_tema[][128] = {
 "III.Z",
 "III.A DISTRIBUCI&Oacute;N DE PROBABILIDAD DE BERNOULLI",
 "III.B DISTRIBUCI&Oacute;N DE PROBABILIDAD BINOMIAL",
 "III.C DISTRIBUCI&Oacute;N DE PROBABILIDAD GEOM&Eacute;TRICA",
 "III.D DISTRIBUCI&Oacute;N DE PROBABILIDAD BINOMIAL NEGATIVA",
 "III.E DISTRIBUCI&Oacute;N HIPERGEOM&Eacute;TRICA",
 "III.F DISTRIBUCI&Oacute;N DE POISSON"
};
char unidad03_tema_ancla[][128] = {
 "III.Z",
 "III.A",
 "III.B ",
 "III.C",
 "III.D",
 "III.E",
 "III.F"
};
char unidad03_tema_presentacion[][128] = {
 "III.Z",
 "III.A 06_U03_Dist_Discretas.pptx",
 "III.B 06_U03_Dist_Discretas.pptx, \
 07_U03_Dist_Discretas_Dist_Binomial_Ejemplos.pptx",
 "III.C 06_U03_Dist_Discretas.pptx, \
09_U03_Integer_Valued_Random_Variables.pptx, \
08_III.C_Distribucion_Geometrica.pptx",
 "III.D 08_III.D_DistBinomialNegativa.pptx",
 "III.E 08_III.E_Distribucion_Hipergeometrica.pptx",
 "III.F 10_U03_III.F_Distribucion_de_Poisson.pptx"
};
char unidad04_tema[][128] = {
 "IV.Z",
 "IV.A DISTRIBUCI&Oacute;N UNIFORME",
 "IV.B DISTRIBUCI&Oacute;N EXPONENCIAL"
};
char unidad04_tema_ancla[][128] = {
 "IV.Z",
 "IV.A",
 "IV.B"
};
char unidad04_tema_presentacion[][128] = {
 "IV.Z",
 "IV.A 11_U04_IV.A_Distribucion_Uniforme.pptx",
 "IV.B"
};
char unidad05_tema[][128] = {
 "V.Z",
 "V.A USO DE LA DISTRIBUCI&Oacute;N NORMAL EN EL C&Aacute;LCULO \
DE PROBABILIDAD",
 "V.B DISTRIBUCIONES RELACIONADAS CON LA DISTRIBUCI&Oacute;N \
NORMAL"
};
char unidad05_tema_ancla[][128] = {
 "V.Z",
 "V.A",
 "V.B"
};
char unidad05_tema_presentacion[][128] = {
 "V.Z",
 "V.A",
 "V.B"
};
char unidad06_tema[][128] = {
 "VI.Z",
 "VI.A POBLACI&Oacute;N, MUESTRA Y MUESTRA ALEATORIA",
 "VI.B PRESENTACI&Oacute;N DE DATOS",
 "VI.C ESTAD&Iacute;STICOS MUESTRALES DE TENDENCIA CENTRAL",
 "VI.D ESTAD&Iacute;STICOS MUESTRALES DE DISPERSI&Oacute;N"
};
char unidad06_tema_ancla[][128] = {
 "VI.Z",
 "VI.A",
 "VI.B",
 "VI.C",
 "VI.D"
};
char unidad06_tema_presentacion[][128] = {
 "VI.Z",
 "VI.A",
 "VI.B",
 "VI.C",
 "VI.D"
};
char unidad07_tema[][128] = {
 "VII.Z",
 "VII.A ESTIMADORES PUNTUALES",
 "VII.B PROPIEDADES DE LOS ESTIMADORES PUNTUALES",
 "VII.C DISTRIBUCIONES DE MUESTREO"
};
char unidad07_tema_ancla[][128] = {
 "VII.Z",
 "VII.A",
 "VII.B",
 "VII.C"
};
char unidad07_tema_presentacion[][128] = {
 "VII.Z",
 "VII.A",
 "VII.B",
 "VII.C"
};
char unidad08_tema[][128] = {
 "VIII.Z",
 "VIII.A INTERVALOS DE CONFIANZA",
 "VIII.B PRUEBAS DE HIP&Oacute;TESIS"
};
char unidad08_tema_ancla[][128] = {
 "VIII.Z",
 "VIII.A",
 "VIII.B"
};
char unidad08_tema_presentacion[][128] = {
 "VIII.Z",
 "VIII.A",
 "VIII.B"
};
char unidad09_tema[][128] = {
 "IX.Z",
 "IX.A INTRODUCCI&Oacute;N",
 "IX.B AN&Aacute;LISIS DE MUESTRAS INDEPENDIENTES"
};
char unidad09_tema_ancla[][128] = {
 "IX.Z",
 "IX.A",
 "IX.B"
};
char unidad09_tema_presentacion[][128] = {
 "IX.Z",
 "IX.A",
 "IX.B"
};

