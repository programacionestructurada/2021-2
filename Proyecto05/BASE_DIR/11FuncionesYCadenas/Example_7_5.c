/** Example_7_5.c
 * REF:
 * Pag. 228 (247/944), Chapter 7 USING ASSEMBLY LANGUAGE WITH C/C++.
 * Barry B. Brey - The Intel microprocessors 80868088, 8018680188, 80286, 80386, 80486... The  Architecture, Programming, and Interfacing, 8th Edition-Prentice Hall (2008).pdf
 */
// Program illustrating an assembly language procedure that
// displays the contents of a C data structure.
#define USAR_REALMODE_INLINE_ASSEMBLY	0
#define USAR_CODEBLOCKS_MINGW_MAKEFILES 0
#if USAR_CODEBLOCKS_MINGW_MAKEFILES == 1
void Str (char string_adr[]) __attribute__ ((weak));
void Crlf() __attribute__ ((weak));
void Numb (int temp) __attribute__ ((weak));
#else
void Str (char string_adr[]);
void Crlf ();
void Numb (int temp);
#endif

// A simple data structure
typedef struct records
{
 char first_name[16];
 char last_name[16];
 int age;
 int salary;
} RECORD;

// Fill some records
RECORD record[4] =
{ {"Bill" ,"Boyd" , 56, 23000},
  {"Page", "Turner", 32, 34000},
  {"Bull", "Dozer", 39, 22000},
  {"Hy", "Society", 48, 62000}
};

// Program
int main(void)
{
 int pnt = -1;
 while (pnt++ < 3) {
   Str(record[pnt].last_name);
   Str(record[pnt].first_name);
   Numb(record[pnt].age);
   Numb(record[pnt].salary);
   Crlf();
 }
 return 0;
}/*end main()*/

void Str (char string_adr[]) {
#if USAR_REALMODE_INLINE_ASSEMBLY == 1
 _asm {
  mov bx,string_adr
  mov ah,2
top:
  mov dl,[bx]
  inc bx
  cmp al,0
  je bot
  int 21h
  jmp top
bot:
  mov al,20h
  int 21h
 }
#endif // USAR_REALMODE_INLINE_ASSEMBLY
}/*end Str()*/

void Crlf() {
#if USAR_REALMODE_INLINE_ASSEMBLY == 1
 _asm {
  mov ah,2
  mov dl,13
  int 21h
  mov dl,10
  int 21h
 }
#endif // USAR_REALMODE_INLINE_ASSEMBLY
}/*end Crlf()*/

void Numb (int temp) {
#if USAR_REALMODE_INLINE_ASSEMBLY == 1
 _asm {
  mov ax,temp
  mov bx,10
  push bx
L1:
  mov dx,0
  div bx
  push dx
  cmp ax,0
  jne L1
L2:
  pop dx
  cmp dl,bl
  je L3
  mov ah,2
  add dl,30h
  int 21h
  jmp L2
L3:
  mov dl,20h
  int 21h
 }
#endif // USAR_REALMODE_INLINE_ASSEMBLY
}/*end Numb()*/


