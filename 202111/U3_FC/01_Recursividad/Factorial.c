/** Factorial.c */

/**
 * Funci\'on recursiva que calcula el facotrial
 * de un entero no negativo.
 */
long int Factorial(long int n)
 {
   long int fact;
   if(n == 0){
       fact = 1;
   }else{
       fact = n * Factorial(n-1);
   }
    return fact;
}

/**
 * Calcula el factorial con una funci\'on
 * Iterativa.
 */
long int FactorialIte(long int n)
{
  long int fact; /* valores parciales de factorial */
  int i; /* Índice para el cálculo del factorial */
  fact = 1;
  for(i=1; i<=n; i++){
    fact = fact * i;
  }
  return fact;
}

