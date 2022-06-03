#include <stdio.h>
#include "IntroProgUnidad02_util.h"

int switch_eg(int x)
{
 int result = x;

 switch(x) {
 case 100:
     result *= 13;// result=result*13
     break;

 case 102:
     result += 10;
     /** Fall through */
 case 103:
     result += 11;//result=result+11=103+11=114
     break;

 case 104:
 case 106:
     result *= result;
     break;

 default:
     result = 0;
 }

 return result;
}

#ifdef CONFIG_SENTENCIA_SWITCH
int main(int argc,char *argv[])
{
 int N;
 int M;

 print_ident_data(__FILE__,argv[0]);

 N = 100;
#if 0
 M = switch_eg(N);//N = 100 M = 1300
#else
 M = switch_eg(100);//N = 100 M = 1300
#endif // 0
 printf("N = %i\tM = %i\n",N,M);

 N = 102;M = switch_eg(N);
 printf("N = %i\tM = %i\n",N,M);//N=102 M=123

 N = 103;M = switch_eg(N);
 printf("N = %i\tM = %i\n",N,M);

 N = 104;M = switch_eg(N);
 printf("N = %i\tM = %i\n",N,M);

 N = 106;M = switch_eg(N);
 printf("N = %i\tM = %i\n",N,M);

 N = 200;M = switch_eg(N);
 printf("N = %i\tM = %i\n",N,M);

 return 0;
}
#endif // CONFIG_SENTENCIA_SWITCH




