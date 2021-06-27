#include <stdio.h>   /*sprintf()*/
#include <common.h>

/**Estructura sin nombre */
struct {
 char c;
 int n;
} a,b; /**Prevenir que no existan m\'as instancias
          de este tipo de estructuras */

struct fei { /** float e int */
 float f;
 int i;
} r = { 2.7, 3};

int main(){
 char str_a[32],str_b[32];
 struct point p;
 p.x = 10;
 p.y = 15;
 print_point(p);
 a.c = 'A'; a.n = 10;
 b.c = 'B'; b.n = 9;
 printf("\n%10s%12s\n","LETRA","NUMERO");
 sprintf(str_a,"     %c    %12d",a.c,a.n);
 sprintf(str_b,"     %c    %12d",b.c,b.n);
 printf("%s\n%s\n",str_a,str_b);

 printf("\n");
 POINT P;
 P.x = 1; P.y = 2; print_point(P);printf("\n");
 printf("%7.2f%10d\n",r.f,r.i);
 struct fei s = {3.14, 5};
 printf("%7.2f%10d\n",s.f,s.i);

 POINT Q = { .y = 20, .x = 10};
 print_point(Q);printf("\n");

 point R = { 100, 200};
 point S = R;/** Solo recomendable si la estructura
                 tiene muy pocos atributos */
 print_point(S);printf("\n");

 point T;
 init_point(&T,R.x,R.y);
 print_point(T);

 return 0;
}/*end main()*/
