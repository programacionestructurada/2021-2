/** 4_2_2_y_4_2_3.c
 *  Estructuras complejas, Estructuras anidadas.
 */
#include <stdio.h>
struct Point{
        double x;
        double y;
};

struct Err{
        double xx;
        double xy;
        double yy;
};

struct Measure {   /** La estructura Measure tiene como atributos */
    struct Point P;       /** dos estructuras */
    struct Err E;
};

struct State {     /** La estructura State tiene como atributos */
    struct Measure Pos;   /** tres estructuras de tipo Measure */
    struct Measure Vel;
    struct Measure Acc;
};

#define UNE(letra,num) letra##num

int main()
{

 struct Point P1 = {4.5,2.3};
 struct Point P2 = {5.5,0.3};
 struct Point P3 = {7.5,6.2};
 struct Err E1 = {0.3,0.2,0.05};
 struct Err E2 = {0.4,0.2,0.5};
 struct Err E3 = {0.2,0.9,0.04};

 struct Measure M1 = {UNE(P,1),UNE(E,1)};/* {P1,E1}*/
 struct Measure M2 = {UNE(P,2),UNE(E,2)};/* {P2,E2}*/
 struct Measure M3 = {UNE(P,3),UNE(E,3)};/* {P3,E2}*/

 struct State S = {.Pos = M1,.Vel = M2,.Acc = M3 };

 printf("Atr x del punto 1 en M1: %g",
         S.Pos.P.x);

 return 0;
}/*end main()*/


