/**00PracticaTestingKconfig_util.cpp*/
//#include <cstdio>
#include "00PracticaTestingKconfig_util.h"
#include <stdio.h>
#define ARRAY_SIZE(arr) (sizeof(arr)/sizeof(arr[0]))

/** print_ident_data(__FILE__,argv[0]); en la funci\'on
 * main imprime datos de identificaci\'on: del archivo
 * fuente que contiene la funci\'on main, y el nombre
 * del archivo ejecutable.
 */
void
print_ident_data(const char *source,char *exe)
{
 printf("FUENTE: %s\n",source);
 printf("EJECUTABLE: %s\n",exe);
}

///** last_five_days_diff
// * calcula la longitud en d\'ias de un intervalo que
// * contiene las 5 fechas m\'as recientes contenidas
// * en el vector std::vector<Fecha> vdf
// * pre: el vector vdf contiene al menos 5 fechas.
// * pre: las 5 fechas m\'as recientes en el vector vdf
// *      son del mismo a\~{n}o.
// */
//short last_five_days_diff(std::vector<Fecha> vdf)
//{
// ordenar_fechas(vdf);
// Fecha f1 = vdf[vdf.size()-5],f2 = vdf[vdf.size()-1];
// return f2 - f1;
//}
//
//void   /**Becomed a friend function of class Calendario on 2020.01.30*/
//printf_fecha(Fecha *fPt,Calendario *Cal_Greg)
//{
//    printf("%15s %2d de %s de %4d\n",Cal_Greg->get_day_name(fPt)
//                                     ,fPt->d
//                                     ,Cal_Greg->MES[fPt->m]
//                                     ,fPt->a);
//}
