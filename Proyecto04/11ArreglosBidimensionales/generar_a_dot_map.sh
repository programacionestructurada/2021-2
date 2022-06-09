gcc.exe -D_X86_ -c -I/mnt/c/MinGW/include/ -I../00CommonFiles/ CuentaCar.c -o CuentaCar.o
gcc.exe -D_X86_ -c -I/mnt/c/MinGW/include/ -I./00CommonFiles/ ../00CommonFiles/conio.c -o conio.o
gcc.exe -Xlinker -Map=a.map CuentaCar.o conio.o -o Proyecto04_13_cmake_cbproygenerated.exe
