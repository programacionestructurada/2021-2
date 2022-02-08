/**
 * REF. P\'ag. 34, Chapter 7 Strings
 * Mikael Olsson - Modern C Quick Syntax Reference_
 * A Pocket Guide to the Language, APIs, and
 * Library-Apress (2019).pdf
 */
#include <stdio.h>
#include <string.h>
#ifndef __unix__
#include <conio2.h>
#endif // __unix__

//#define CADENA  0
#define CADENA  1
//#define FORMA   0
//#define FORMA   1
#define FORMA   2
#define ABOUT_STRING_FCS    0
//#define ABOUT_STRING_FCS    1

int main(){
#if CADENA == 0
 char myString[] = "Hi";
 printf("%s",myString);  /* "Hi" */
 printf("\t\t(*** char myString[] = \"Hi\"; ***)");
#endif // CADENA
#if CADENA == 1
 char myString[3] = {'H','i','\0'};
 printf("%s",myString);  /* "Hi" */
 printf("\t\t(*** char myString[] = {\'H\',\'i\',\'\\0\'}; ***)");
#endif // CADENA

#ifndef __unix__
 getch();
 clrscr();
#endif // __unix__
 char *ptr = "Hi";
 printf("%s",ptr);
 printf("\t\t(*** char *ptr = \"Hi\"; ***)");
#ifndef __unix__
 getch();
 clrscr();
#endif // __unix__
#if FORMA == 0
 char line = '\n';     /** c\'odigo de escape */
#elif FORMA == 1
 char line = '\012';   /** notaci\'on octal */
#elif FORMA == 2
 char line = '\x0A';   /** notaci\'on hexadecimal */
#endif // FORMA
 printf("First line%cSecond line",line);
 
 return 0;
}/*end main()*/


