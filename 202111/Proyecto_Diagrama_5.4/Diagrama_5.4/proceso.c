#include <string.h>
extern const int MAX;

void proceso(char N[MAX][128],float *P,int A)
{
 int I,J;
 float PA;
 char NA[128];
 for (I = 1;!(I > A);I++){
   for (J = I + 1;!(J > A);J++) {
     if (P[J] > P[I]){
       PA = P[I];
       strcpy(NA,N[I]);
       P[I] = P[J];
       strcpy(N[I],N[J]);
       P[J] = PA;
       strcpy(N[J],NA);
     }
     else {
       continue;
     }
   }
 }
}/*end proceso()*/
