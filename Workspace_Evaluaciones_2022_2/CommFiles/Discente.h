#ifndef DISCENTE_H_INCLUDED
#define DISCENTE_H_INCLUDED
#define LENGTH(A)   (sizeof(A)/sizeof(A[0]))
//#define DISCENTS_AMOUNT  (37)//195-10=185, 185/5=37
#define DISCENTS_AMOUNT  (39)//LMC 2022.06.09.14.06
                             //Agregu\'e manualmente en structs_DiscenteEvaluado.c,
                             //y en Discente.c a los discentes Mu\~noz Vega Yael Arturo y
                             //Santiago Tellez Eduardo Israel.
#define SIZE_OF_DISC_NAME_ARRAY (64)
/**El tama\~no del siguiente arreglo (el arreglo m_arr)
 * debe ser igual a la cantidad de evidencias solicitadas
 * para evaluaci\'on del curso m\'as uno. Es decir, debe
 * ser de tama\~no igual al tama\~no del arreglo EvtMeasure
 * (en el archivo EventsMeasures.c).
 */
static float m_arr[] = {1,2,3,4,5,6,7,8,9};
#define SIZE_OF_CALDEVID    LENGTH(m_arr)
struct Discente {
 char disc_name[SIZE_OF_DISC_NAME_ARRAY];/**discente's name*/
 float caldevid[SIZE_OF_CALDEVID];       /**calificacion de evidencias*/
};
typedef float (*float_array_pt_t)[DISCENTS_AMOUNT];
#define CONFIG_INCLUDING_DISCENTE_C_IN_MAXIMUNS_GRADES_C
#ifndef CONFIG_INCLUDING_DISCENTE_C_IN_MAXIMUNS_GRADES_C
float (*max_grades(struct Discente *D_A[DISCENTS_AMOUNT]))[DISCENTS_AMOUNT];
void print_max_grades(float_array_pt_t float_array_pt,
                 struct Discente *D_A[DISCENTS_AMOUNT])
#else
float (*max_grades())[DISCENTS_AMOUNT];
void print_max_grades(float_array_pt_t);
#endif // CONFIG_INCLUDING_DISCENTE_C_IN_MAXIMUNS_GRADES_C
#endif // DISCENTE_H_INCLUDED
