#CC = gcc
CC = /mnt/c/MinGW/bin/gcc.exe
#SOLO UNA VEZ De Leo Dan
#LIBSO = /lib/x86_64-linux-gnu/libm.so.6     # if using CC = gcc
LIBSO = c:/MinGW/lib/libmsvcrt.a # if using CC = /mnt/c/MinGW/bin/gcc.exe
CFLAGS += -D_X86_ #To avoid error "undefined processor type", see
                   # /mnt/c/MinGW/include/winnt.h, line 1900  

#	$(CC) -c -I./00CommonFiles/ 13CuentaCar/CuentaCar.c -o 13CuentaCar/CuentaCar.o
all: Proyecto04_13.exe Proyecto04_14.exe Proyecto04_15.exe
Proyecto04_15.exe: 15Binomial/DistribucionBinomial.c
#	$(CC) -Xlinker -Map=a.map -v -lm 15Binomial/DistribucionBinomial.c -o Proyecto04_15.exe
#	$(CC) -Xlinker -Map=a.map  -lm 15Binomial/DistribucionBinomial.c -o Proyecto04_15.exe
	$(CC) $(LIBSO) -I./00CommonFiles/ 15Binomial/DistribucionBinomial.c 00CommonFiles/conio.c -o Proyecto04_15.exe
Proyecto04_14.exe: 14DigitoMayusculaMinuscula/DigitoMayusculaMinuscula.c
	$(CC) -I./00CommonFiles/  14DigitoMayusculaMinuscula/DigitoMayusculaMinuscula.c 00CommonFiles/conio.c -o $@
Proyecto04_13.exe: 13CuentaCar/CuentaCar.c 00CommonFiles/conio.c
	$(CC) $(CFLAGS) -c -I/mnt/c/MinGW/include/ -I./00CommonFiles/ 13CuentaCar/CuentaCar.c -o 13CuentaCar/CuentaCar.o
	$(CC) $(CFLAGS) -c -I/mnt/c/MinGW/include/ -I./00CommonFiles/ 00CommonFiles/conio.c -o 13CuentaCar/conio.o
	$(CC) 13CuentaCar/CuentaCar.o 13CuentaCar/conio.o -o Proyecto04_13.exe

clean:
	rm -v 13CuentaCar/*.o *.exe

