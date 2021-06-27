#include <stdio.h>
#include <assert.h>  /* static_assert() */
typedef unsigned int uint;
void mostrar(float x[],uint tam)__attribute__ ((weak));
void mostrar_densidad(float x[],float p[],uint tam)
__attribute__ ((weak));
void eval(float (*g)(float),float x[],float y[],uint tam)
__attribute__ ((weak));
#define SIZE_ARR(a) (sizeof(a)/sizeof(a[0]))

/**
 static_assert(SIZE_ARR(x) == SIZE_ARR(p),
        "x y p deben tener el mismo tama\\~no!"); */
void mostrar_densidad(float x[],float p[],uint tam) {
/**Utilizando un ciclo (do-while, while, o for),
 mostrar en forma tabular la funci\'on de
 densidad de la variable aleatoria (v.a.) discreta X.
 Por ejemplo, si la v.a. X toma los valores
 {1.0,2.0,3.0} y la densidad de la v.a. tiene los valores
 {0.3,0.4,0.3} respectivamente y cero en cualquier otra
 parte, la funci\'on podr\'ia mostrar:
   (    x    ,  f(x)  )
   (   1.0000,  0.3000)
   (   2.0000,  0.4000)
   (   3.0000,  0.3000)
   (otherwise,  0.0000)
 */
}

void mostrar(float x[],unsigned int tam){
  /**Utilizando un cliclo do-while, imprimir los
  //valores del arreglo x[] (en forma horizontal,
  //es decir en la forma:
  // x0  x1  ... x<tam-1>), mostrando 4 decimales*/
}
/**
 static_assert(SIZE_ARR(x) == SIZE_ARR(p),
        "x y p deben tener el mismo tama\\~no!"); */
float valor_esperado(float x[],float p[],unsigned int size){
 float result = 0.0f;
 float producto;
 int i = size - 1;
 while (i >= 0) {
  producto = x[i]*p[i];
  result += producto;
  i--;
 }
 return result;
}

/**
 static_assert(SIZE_ARR(x) == SIZE_ARR(p),
        "x y p deben tener el mismo tama\\~no!"); */
void varianza(float x[],float p[],unsigned int size){
 float var=0.0f,ve,prod;
 int i;
 ve = valor_esperado(x,p,size);
 for (i = 0; i < size;i++) {
   prod = (x[i] - ve)*(x[i] - ve)*p[i];
   var += prod;
 }
 //printf("\nValores de la variable X:\n");
 //mostrar(x,size);
 printf("\nVarianza de la variable aleatoria: %.4f\n",var);
}
/**
 float *g(float);//Prototipo de funci\'on que recibe un
                 //float y devuelve un float *
 float (*g)(float);//Apuntador a funci\'on que recibe un
                   //float y devuelve un float
 static_assert(SIZE_ARR(x) == SIZE_ARR(y),
        "x y y deben tener el mismo tama\\~no!"); */
void eval(float (*g)(float),float x[],float y[],uint tam) {
/** Esta funci\'on debe evaluar la funci\'on g en todos los
   elementos del arreglo x, guardando el resultado g(x[k])
   en la entrada correspondiente del arreglo y. Es decir,
   cuando termine la ejecuci\'on de esta funci\'on, en el
   arreglo y deberemos tener:
   y[k] = g(x[k]) para k\in {0,1,...,SIZE_ARR(x)-1}.
 */
}
float fun_g(float x) {
 return (x*x);
}

int main(){
 /*Valores de una variable aleatoria discreta X */
 float arreglo[] = {1.0f,2.0f,3.0f};
 /*Valores de la funci\'on de densidad de la v.a. X */
 //float prob[] = {0.3f,0.4f,0.3f};
 float prob[] = {0.3333f,0.3333f,0.3333f};
 float y[3];
 float ev,sm; /*expected value, second moment*/
 printf("Funci\\'on de densidad de la variable aleatoria X:\n");
 static_assert(SIZE_ARR(arreglo) == SIZE_ARR(prob),
        "arreglo y prob deben tener el mismo tama\\~no!");
 mostrar_densidad(arreglo,prob,SIZE_ARR(arreglo));
 printf("\nValores de la variable aleatoria X:\n");
 mostrar(arreglo,SIZE_ARR(arreglo));
 printf("\nValor esperado E[X] = %.4f\n",
        ev=valor_esperado(arreglo,prob,SIZE_ARR(arreglo)));
 varianza(arreglo,prob,SIZE_ARR(arreglo));

 static_assert(SIZE_ARR(arreglo) == SIZE_ARR(y),
        "arreglo and y must be of equal size!");
 eval(&fun_g,arreglo,y,SIZE_ARR(arreglo));
 printf("\nValores de la variable aleatoria Y=X^{2}:\n");
 mostrar(y,SIZE_ARR(y));
 printf("\n\nSegundo momento de la variable aleatoria X:\n");
 printf("E[Y]=E[X^{2}]: %.4f\n",
        sm=valor_esperado(y,prob,SIZE_ARR(y)));
 printf("\nVarianza de la variable aleatoria X:\n");
 printf("(Segundo momento central de la variable aleatoria X)\n");
 printf("E[(X-E[X])^{2}]=E[X^{2}]-(E[X])^{2}=%.4f-%.4f=%.4f\n",
        sm,ev*ev,sm-ev*ev);


 return 0;
}/*end main()*/
