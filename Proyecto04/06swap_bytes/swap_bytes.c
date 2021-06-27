#include <stdio.h>

int main()
{
	char temp;
	char rslt1, rslt2;
	//switch to assembly
	/**	{
		MOV BL, 'A'
		MOV BH, 'B'
		//swap bytes
		MOV temp, BL
		MOV rslt1, BH
		MOV BH, temp
		MOV rslt2, BH
	}*/
	__asm__ __volatile__ ("MOVB $'A',%%BL" : :) ;
	__asm__ __volatile__ ("MOVB $'B',%%BH" : :) ;
	__asm__ __volatile__ ("MOVB %%BL,%0" : "=m" (temp) : ) ;
	__asm__ __volatile__ ("MOVB %%BH,%0" : "=m" (rslt1) : ) ;
    __asm__ __volatile__ ("MOVB %0,%%BH" : : "m" (temp) ) ;
    __asm__ __volatile__ ("MOVB %%BH,%0" : "=m" (rslt2) : ) ;
	//print result
	printf("BL = %c, BH = %c\n", rslt1, rslt2);
	__asm__ __volatile__ ("movb $'B',%%BL\n\t \
                           movb $'A',%%BH\n\t \
                           movb %%BL,%0\n\t   \
                           movb %%BH,%1\n\t   \
                           movb %3,%%BH\n\t   \
                           movb %%BH,%2\n\t"
                           :   "=m" (temp),
                               "=m" (rslt1),
                               "=m" (rslt2)
                             : "m" (temp)
                             : "%eax" ) ;
    printf("BL = %c, BH = %c\n", rslt1, rslt2);
	return 0;
}/*end main()*/
