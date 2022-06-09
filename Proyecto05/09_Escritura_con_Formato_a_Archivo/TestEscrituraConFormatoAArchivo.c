/** TestEscrituraConFormatoAArchivo.c
 * REF: page 102 (99/113)
 * Mikael Olsson (2019). Modern C Quick Syntax Reference,
 * A Pocket Guide to the Language, APIs and Libraries.
 * Apress.
 * Mikael Olsson - Modern C Quick Syntax Reference_ A
 * Pocket Guide to the Language, APIs, and Library-Apress
 * (2019).pdf
 */
#include <stdio.h> /* fopen, fprintf, fclose */
int main(void)
{
 /* Create and open a file for reading/writing */
 FILE *fp = fopen ("file.txt", "w+");
 /* Write text to the file */
 fprintf(fp, "%s\n%s", "Hello", "World");
 /* Close the file */
 fclose(fp);
 return 0;
}/*end main()*/


