gcc.exe -D_X86_ -c -I/mnt/c/MinGW/include/ -I../00CommonFiles/ DistribucionBinomial.c -o DistribucionBinomial.o
#gcc.exe -D_X86_ -c -I/mnt/c/MinGW/include/ -I./00CommonFiles/ ../00CommonFiles/conio.c -o conio.o
#gcc.exe -Xlinker -Map=a.map DistribucionBinomial.o -o Proyecto04_15_cmake_cb_proygenerated.exe
gcc.exe -Xlinker -Map=Proyecto04_15_cbp_cmake_created.map DistribucionBinomial.o -o Proyecto04_15_cbp_cmake_created.exe
