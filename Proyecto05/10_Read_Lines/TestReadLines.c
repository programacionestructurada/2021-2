/** TestReadLines.c
 * REF: page 103 (100/113)
 * Mikael Olsson (2019). Modern C Quick Syntax Reference,
 * A Pocket Guide to the Language, APIs and Libraries.
 * Apress.
 * Mikael Olsson - Modern C Quick Syntax Reference_ A
 * Pocket Guide to the Language, APIs, and Library-Apress
 * (2019).pdf
 */
#include <stdio.h> /* fopen, fgets, fclose */

char three_lines[3][128] = {
 "Esta es la l\\'inea 1 del archivo",
 "L\\'inea n\\'umero 2",
 "Esta es la tercera l\\'inea del archivo"
};

void init_file_dot_txt(const char *file){
 /* Create and open a file for reading/writing */
 FILE *fp = fopen (file, "w+");
 /* Write text to the file */
 fprintf(fp,"%s\n%s\n%s",
         three_lines[0],
         three_lines[1],
         three_lines[2]);
 /* Close the file */
 fclose(fp);
}

int main(void){
 char buf[100];
 int i=1;
 init_file_dot_txt("file.txt");
 FILE *fp = fopen("file.txt", "r");
 while(fgets(buf,100,fp)!=NULL) {
   printf("Line %i contains: %s\n", i++, buf);
 }
 fclose(fp);
 return 0;
}/*end main()*/

