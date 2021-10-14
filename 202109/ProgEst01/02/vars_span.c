#include <stdio.h>
char global_c = 'a';          /** variable global */
void funcion_en_file();
extern char my_char;

int main(){
  funcion_en_file(0);
  printf("global_c = %c\n",global_c); /** b */
  global_c = 'A'; //x = 0; /**error*/
  #if 0
  funcion_en_file();
  #else
  funcion_en_file(10);
  printf("global_c = %c\n",global_c); /** B */
  printf("main(): my_char = %c\n",my_char);
  #endif
  #if 0
  printf("f = %4.2f\n",f); /** Error: f solo es accesible
                               dentro de la funci\'on
                               funcion_en_file()         */
  #endif // 0
  return 0;
}/*end main()*/

