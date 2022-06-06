/**IntroProgUnidad02_util.h*/
#ifndef INTROPROGUNIDAD02_UTIL_INCLUDED
#define INTROPROGUNIDAD02_UTIL_INCLUDED
#include "PO_DiaNumDLab.h"
#define ARRAY_SIZE(arr) (sizeof((arr))/sizeof((arr)[0]))

void print_ident_data(const char *,char *);
void print_hrule(void);
void set_formato(char formato[],struct ConjDInts CdI);
void print_like_table(short rows,struct ConjDInts CdI,char (**two_dim_char_array_pt)[][COLUMN_W]);
void create_h_rule(char h_rule[SHRT_MAX],struct ConjDInts cdi);
//typedef char (*two_dim_char_array_pt_t)[][COLUMN_W];
/**
 * @param t_c: two dimension char array pointer type table content.
 */
void tabla(short rows,short cols,two_dim_char_array_pt_t t_c[]);
#endif // INTROPROGUNIDAD02_UTIL_INCLUDED