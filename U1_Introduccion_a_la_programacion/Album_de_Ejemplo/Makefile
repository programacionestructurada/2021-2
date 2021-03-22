CC = mingw32-gcc.exe
DD = mingw32-g++.exe

Programa_1.exe:main.o
	$(DD) -o Programa_1.exe main.o
main.o:main.c
	$(CC) -Wall -g  -c main.c -o main.o
#Programa_2.exe:Programa2.c
#	mingw32-gcc.exe -Wall -g  -c Programa2.c -o Programa2.o
#	mingw32-g++.exe  -o Programa_2.exe Programa2.o

Programa_2.exe:Programa2.c
	$(CC) -Wall -O2  -c Programa2.c -o Programa2.o
	mingw32-g++.exe  -o Programa_2.exe Programa2.o  -s
#	$(DD)  -o Programa_2.exe Programa2.o  -s

