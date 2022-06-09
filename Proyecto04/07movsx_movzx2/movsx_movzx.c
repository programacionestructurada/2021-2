#include <stdio.h>

int main()
{
	int rslt1, rslt2;
	//switch to assembly
/**	_asm
	{
		MOV AL, 0F5H
		MOVSX EAX, AL
		MOV rslt1, EAX
		MOV BL, 0F5H
		MOVZX EBX, AL
		MOV rslt2, EBX
	}*/
	__asm__ __volatile__ (
                "movb  $0xF5,%%AL  \n\t  \
                 movsx  %%AL,%%eax\n\t   \
                 movl  %%eax,%0    \n\t  \
                 movb  $0xF5,%%BL  \n\t  \
                 movzx %%BL,%%ebx  \n\t  \
                 movl %%ebx,%1    \n\t"
                 : "=m" (rslt1), "=m" (rslt2)
                 : : "%eax", "%ebx" );
	printf("Result = %X, %X\n", rslt1, rslt2);
	return 0;
}/*end main()*/
