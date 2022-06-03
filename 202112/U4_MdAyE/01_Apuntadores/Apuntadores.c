/** Apuntadores.c - Muestra el uso b\'asico de apuntadores
 * Tema: Apuntadores en Lenguaje C.
 */
#include <stdio.h>

int main()
{
 int u = 3;
 int v;
 int *pu;       /* puntero a un entero */
 int *pv;       /* puntero a un entero */

 pu = &u;       /* asigna direcci\'on de u a pu */
 v = *pu;       /* asigna valor de u a v */
 pv = &v;       /* asigna direcci\'on de v a pv */

 printf("\nu=%d &u=%X pu=%X *pu=%d",
        u, &u, pu, *pu);
 printf("\n\nv=%d &v=%X pv=%X *pv=%d",
        v, &v, pv, *pv);
 *pu = 4;
 printf("\nu = %d\n",u);
 return 0;
}/*end main()*/


