#include <stdio.h>
#include <stdlib.h>
#include "IntroProgUnidad02_util.h"

int main(int arc,char *arv[])
{
 char encabezado[][COLUMN_W] =
  {"LETTER","DESCRIPTION","VARIABLE","OTHER LETTER","DESCRIPTION","VARIABLE"};
 char T01[][COLUMN_W] =
 {"F.","INGRESOS ACUMULABLES","AmountF","","",""};
 char T02[][COLUMN_W] =
 {"","(A-B-C-D-E)","","","",""};
 char T03[][COLUMN_W] =
 {"","","","P.","IMPUESTO RETENIDO AL CONTRIBUYENTE","AmountP"};
 char T04[][COLUMN_W] =
 {"","","","","(Campo Z de esta p\\'agina, m\\'as los campos h, m\\'as j,",""};
 char T05[][COLUMN_W] =
 {"","","","","m\\'as los campos U1, m\\'as V1 de",""};
 char T06[][COLUMN_W] =
 {"","","","","la p\\'agina 2)",""};
 two_dim_char_array_pt_t TwoDimCharArrayPt_array[] =
 {&encabezado,&T01,&T02,&T03,&T04,&T05,&T06};

 printf("%s\n",__FILE__);
 printf("\n");tabla(7,6,TwoDimCharArrayPt_array);
 return 0;
}

