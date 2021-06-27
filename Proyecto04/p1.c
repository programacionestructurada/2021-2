/**p1.c 
 * Contiene la funci\'on main.
 */
#include <stdio.h>
/** Prototipo de la funci\'on max */
int max(int a,int b);
/**Se define la macro MAX */
#define MAX(A,B)	((A>B) ? (A) : (B))

const int myconstant = 70;

int main()
{
  int result = max(myconstant,55);
  int result1 = MAX(myconstant,100);
  printf("%d\n",result);
  return result;
}/*end main()*/

