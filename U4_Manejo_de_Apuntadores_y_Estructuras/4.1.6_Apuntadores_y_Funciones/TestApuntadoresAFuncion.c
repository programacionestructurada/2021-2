#include <stdio.h>
#include <stdlib.h>
#define CONFIG_CON_AMPERSAND
short suma(short,short);
short multiplicacion(short,short);
/**Apuntador a funci\'on que recibe dos short y devuelve
  un short*/
short (*fn_Pt)(short,short);
//void mostrar_operacion(short (*fn_Pt)(short,short),short op1,short op2);
void mostrar_operacion(short (*)(short,short),short,short,char);

int main(int argc,char *argv[])
{
 printf("%s\n\n",argv[0]);
 short A = 100,B = 200;
#ifndef CONFIG_CON_AMPERSAND
 fn_Pt = suma;
#else
 fn_Pt = &suma;
#endif // CONFIG_CON_AMPERSAND
 printf("%i + %i = %i\n",A,B,fn_Pt(A,B));
 mostrar_operacion(fn_Pt,A,B,'+');
#ifndef CONFIG_CON_AMPERSAND
 fn_Pt = multiplicacion;
#else
 fn_Pt = &multiplicacion;
#endif // CONFIG_CON_AMPERSAND
 printf("%i * %i = %i\n",A,B,fn_Pt(A,B));
 mostrar_operacion(fn_Pt,A,B,'*');
 return 0;
}

short suma(short op1,short op2)
{
 return op1+op2;
}
short multiplicacion(short op1,short op2)
{
 return op1*op2;
}
void
mostrar_operacion(short (*fn_Pt)(short,short),short op1,short op2,char op)
{
#if 0
 printf("%i %c %i = %i\n",op1,op,op2,fn_Pt(op1,op2));
#else
 printf("%i %c %i = %i\n",op1,op,op2,(*fn_Pt)(op1,op2));
#endif
}
