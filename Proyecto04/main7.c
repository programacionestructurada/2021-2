#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdalign.h>
#include <assert.h>
#include <string.h>
/*******************************************************/
int arr[4];
/** En CodeBlocks: Para poder usar static_assert(),
 * en lugar de mingw32-gcc, Usar el compilador gcc
 * de Cygwin p.ej.
 * Project -> Properties... |
 *                       |->Project's Build Options...
 * Selected compiler: Cygwin GCC
 */
// static assert
static_assert(_Alignof(arr) == 4,"unexpected alignment");

struct packed {
 unsigned int i;
 char *p;
}
#ifdef __unix__ /**In order to compile in MS Debian App*/
__attribute__((packed))
#endif
;
static_assert(
  sizeof(struct packed)==sizeof(unsigned int) +
              sizeof(char*),
              "struct packed must not have any padding"
);
/*******************************************************/
#define SIZE_ARR(a) (sizeof(a)/sizeof(a[0]))
static const char prefix[]="YOUR GRADE : ";
//static const char prefix[]="Error Number: ";
#define ARRAYSIZE   25
//#define ARRAYSIZE   20
char str[ARRAYSIZE];
////Ensure that str has sufficient space to store at least
////one additional character for an error code
//static_assert(
//  sizeof(str) > sizeof(prefix),
//  "str must be larger than prefix"
//);
//strcpy(str,prefix);
/*******************************************************/

int absdiff(int x,int y)
{
 if (x < y)
   return y - x;
 else
   return x - y;
}

bool safediv(int dividend,int divisor,int *quotient)
{
 if (!quotient) return false;
 if ((divisor == 0) ||
               ((dividend == INT_MIN) && (divisor == -1)))
   return false;
 *quotient = dividend / divisor;
 return true;
}

void printgrade(unsigned int marks) {
 if (marks >= 90) {
    //puts("YOUR GRADE : A");
    sprintf(str,"%s%s",prefix,"A");
  } else if (marks >= 80) {
    //puts("YOUR GRADE : B");
    sprintf(str,"%s%s",prefix,"B");
  } else if (marks >=70) {
    //puts("YOUR GRADE : C");
    sprintf(str,"%s%s",prefix,"C");
  } else {
    //puts("YOUR GRADE : Failed");
    sprintf(str,"%s%s",prefix,"Failed");
  }
  puts(str);
}

void cond(int a, int *p)
{
 if (p && a > 0)
 *p += a;   // *p = *p + a;
}

int fib_dw(int n)
{
 int i = 0;
 int val = 0;
 int nval = 1;

 do {
   int t = val + nval;
   val = nval;
   nval = t;
   i++;
 } while (i < n);

 return val;
}

/**
 * La condición del while dejará de cumplirse
 * cuando alguna de las Condiciones: n>0, y<n
 * deje de cumplirse.
 * Para que el ciclo do while se realice más de
 * una vez se debe pasar n mayor que 2, y un
 * valor de y que sea menor que 0.
 */        /* 22   350      352 */
int dw_loop(int x, int y, int n)
{
 unsigned int count = 0;
 do {
   x += n;  /* x = 100 + 352 */
   y *= n;  /*y = 350 \times 352*/
   n--;     /*n = 1 - 1*/
   count++;
 } while ((n > 0) & (y < n)); /* Note use of bitwise '&'*/
          /*0 > 0,   250 < 0*/
 printf("\ncount = %u\n",count);
 return x;
}

int fib_w(int n)
{
 int i = 0;
 int val = 1;
 int nval = 1;

 while (i < n){
   int t = val + nval;
   val = nval;
   nval = t;
   i++;
 }

 return val;
}

/**Stub*/
int fib_w_goto(int n)
{
 int val = 1;
 //int nval = 1;
 int nmi;//, t;
 if(val >= n)
   goto done;
 nmi = n - 1;(void)nmi;
// ...
done:
 return val;
}

int fib_f(int n){
 int i = 0;
 int val = 1;
 int nval = 1;

 for (i = 1; i < n; i++){
   int t = val + nval;
   val = nval;
   nval = t;
 }
 return val;
}

int main()
{
 int A,B,R;
 int *pt;
 printf("Ingrese valor entero A = ");
 scanf("%d",&A);
 printf("Ingrese valor entero B = ");
 scanf("%d",&B);
 unsigned int ui = absdiff(A,B);
 printf("|A-B|=%d\n",ui);
 printf("%i\n",absdiff(A,B));
 if (safediv(A,B,&R))
   printf("%d/%d=%d\n",A,B,R);
 printf("/-------------/\n%5u%5u\n",
        SIZE_ARR(str),SIZE_ARR(prefix)+7);
 static_assert(sizeof(str) >= sizeof(prefix)+7,
               "str debe ser mayor que prefix en al menos 7");
 printgrade(120);
 printgrade((unsigned int)A);
 printgrade((unsigned int)B);

 printf("\n/********************************2021.04.19**/\n");
/* cond(A,direccion de B); */
 pt = &B;
 printf("A = %5d, B = %5d\n",A,B);
 printf("cond(A,pt);\n");
 cond(A,pt);
 printf("A = %5d, B = %5d\n",A,B);
 printf("\n/********************************************/\n");

 A = fib_dw(3);
 printf("%5d",A);
 A = fib_dw(4);
 printf("%5d",A);
 A = fib_dw(5);
 printf("%5d",A);
 A = fib_dw(6);
 printf("%5d",A);
 A = fib_dw(7);
 printf("%5d",A);
 A = fib_dw(8);
 printf("%5d",A);
 printf("\n/********************************************/\n");

 printf("\n/********************************2021.04.20**/\n");
// printf("A = %5d, B = %5d\n",A,B);
// R = dw_loop(A,B,352);
// printf("\nR = %d\n",R);
 R = dw_loop(A,-1,2);
 printf("\nR = %d\n",R);
 printf("\n/********************************************/\n");
 A = fib_w(3);
 printf("%5d",A);
 A = fib_w(4);
 printf("%5d",A);
 A = fib_w(5);
 printf("%5d",A);
 A = fib_w(6);
 printf("%5d",A);
 A = fib_w(7);
 printf("%5d",A);
 A = fib_w(8);
 printf("%5d",A);

 printf("\n/******************************2021.04.21**/\n");
 A = fib_w_goto(3);
 printf("%5d",A);
 A = fib_w_goto(4);
 printf("%5d",A);
 A = fib_w_goto(5);
 printf("%5d",A);
 A = fib_w_goto(6);
 printf("%5d",A);
 A = fib_w_goto(7);
 printf("%5d",A);
 A = fib_w_goto(8);
 printf("%5d",A);
 printf("\n/********************************************/\n");
 A = fib_f(3);
 printf("%5d",A);
 A = fib_f(4);
 printf("%5d",A);
 A = fib_f(5);
 printf("%5d",A);
 A = fib_f(6);
 printf("%5d",A);
 A = fib_f(7);
 printf("%5d",A);
 A = fib_f(8);
 printf("%5d",A);
 printf("\n/********************************************/\n");
 int i=0;
 for (i = 0;i < 2000000; i++){
    //if ( (i != 1) && ((1999900 % i)==0))
    if ( (i>0) && (i != 1) && ((1999900 % i)==0)){
      //break;//Se interrumpe el ciclo y en el printf
            //despues del for imprimi\'o i=2
      continue;//Ahora, el printf despues del for
               //imprimi\'o i=2000000
    }
    if (i ==  1999900){
      printf("\ni = %d\n",i);
    }
    //assert(1!=0);
 }
 printf("\ni=%d\n",i);


//Ensure that str has sufficient space to store at least
//one additional character for an error code
static_assert(
  sizeof(str) > sizeof(prefix),
  "str must be larger than prefix"
);
 strcpy(str,prefix);

// static assert
static_assert(_Alignof(arr) == 4, "unexpected alignment");
 //printf("Alignment of arr = %u\n",_Alignof(arr));
assert(alignof(max_align_t) == 16);//runtime assertion
 //printf("Alignment of max_align_t = %u\n",alignof(max_align_t));

 return 0;
}/*end main()*/




