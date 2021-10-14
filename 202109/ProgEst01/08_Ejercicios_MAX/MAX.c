#include <stdio.h>
#include <ctype.h>

int main(){
 char c = 'a';
 char d = toupper(c);
/**************************************************/
 printf("Upercase: %c\n",d); // A
 d = 'Z';
 c = tolower(d);
 printf("Lowercase: %c\n",c); // z
 printf("%i\t%c\n",'A','A');
 printf("%i\t%c\n",'Z','Z');
 printf("%i\t%c\n",'a','a');
 printf("%i\t%c\n",'z','z');
/**************************************************/
 c = 'a'; /**  'A','B', ..., 'Z',  'a','b', ...,'z'
               65            90,..,97,..        122
             minuscula = mayuscula + 'a'-'A'
             mayuscula = minuscula - ('a'-'A')
           */
 /* Si c es letra minuscula */
 c = c - ('a' - 'A'); // as\'i se obtiene la mayuscula
 printf("Upercase: %c\n",c); // A   ok.

 c = c + ('a'-'A');
 printf("Lowercase: %c\n",c); // a   ok.
/**************************************************/
 int x = c;
 x = x -32;
 printf("%c\n",(char)x);
 return 0;
}/*end main()*/

