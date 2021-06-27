                      //Si sizeofint es 32
  i = sizeofint - 1;  //31
  printf("%d",(value >> i) & 0x1);
  i = sizeofint - 2;  //30
  printf("%d",(value >> i) & 0x1);
  i = sizeofint - 3;  //29
  printf("%d",(value >> i) & 0x1);
  i = sizeofint - 4;  //28
  printf("%d",(value >> i) & 0x1);
  i = sizeofint - 5;  //27
  printf("%d",(value >> i) & 0x1);
  i = sizeofint - 6;  //26
  printf("%d",(value >> i) & 0x1);
  i = sizeofint - 7;  //25
  printf("%d",(value >> i) & 0x1);
  i = sizeofint - 8;  //24
  printf("%d",(value >> i) & 0x1);
  i = sizeofint - 9;  //23
  printf("%d",(value >> i) & 0x1);
  i = sizeofint - 10; //22
  printf("%d",(value >> i) & 0x1);
  i = sizeofint - 11; //21
  printf("%d",(value >> i) & 0x1);
  i = sizeofint - 12; //20
  printf("%d",(value >> i) & 0x1);
  i = sizeofint - 13; //19
  printf("%d",(value >> i) & 0x1);
  i = sizeofint - 14; //18
  printf("%d",(value >> i) & 0x1);
  i = sizeofint - 15; //17
  printf("%d",(value >> i) & 0x1);
  i = sizeofint - 16; //16
  printf("%d",(value >> i) & 0x1);
  i = sizeofint - 17; //15
  printf("%d",(value >> i) & 0x1);
  i = sizeofint - 18; //14
  printf("%d",(value >> i) & 0x1);
  i = sizeofint - 19; //13
  printf("%d",(value >> i) & 0x1);
  i = sizeofint - 20; //12
  printf("%d",(value >> i) & 0x1);
  i = sizeofint - 21; //11
  printf("%d",(value >> i) & 0x1);
  i = sizeofint - 22; //10
  printf("%d",(value >> i) & 0x1);
  i = sizeofint - 23; //9
  printf("%d",(value >> i) & 0x1);
  i = sizeofint - 24; //8
  printf("%d",(value >> i) & 0x1);
  i = sizeofint - 25; //7
  printf("%d",(value >> i) & 0x1);
  i = sizeofint - 26; //6
  printf("%d",(value >> i) & 0x1);
  i = sizeofint - 27; //5
  printf("%d",(value >> i) & 0x1);
  i = sizeofint - 28; //4
  printf("%d",(value >> i) & 0x1);
  i = sizeofint - 29; //3
  printf("%d",(value >> i) & 0x1);
  i = sizeofint - 30; //2
  printf("%d",(value >> i) & 0x1);
  i = sizeofint - 31; //1
  printf("%d",(value >> i) & 0x1);
  i = sizeofint - 32; //0
  printf("%d",(value >> i) & 0x1);
/**
En el directorio
  LASTNAME_FIRSTNAME/
  |____main4.c
  |____incnmain4.c


En el archivo make, se agregar\'ia solo
ImprimeBitsDeUnEntero.exe:main4.c incnmain4.c
    $(CC) -c main4.c -o main4.o
    $(CC) -o ImprimeBitsDeUnEntero.exe main4.o
(M\'as los dem\'as modificadores que les agregue el IDE)

 */









