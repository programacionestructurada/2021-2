#ifndef DISCENTE_H_INCLUDED
#define DISCENTE_H_INCLUDED
#define LENGTH(A)   (sizeof(A)/sizeof(A[0]))
#define DISCENTS_AMOUNT  (1)
#define SIZE_OF_DISC_NAME_ARRAY (64)
static float m_arr[] = {1,2,3,4,5,6,7,8,9};
#define SIZE_OF_CALDEVID    LENGTH(m_arr)
struct Discente {
 char disc_name[SIZE_OF_DISC_NAME_ARRAY];
 float caldevid[SIZE_OF_CALDEVID];
};
typedef float (*float_array_pt_t)[DISCENTS_AMOUNT];
float (*max_grades(struct Discente *D_A[DISCENTS_AMOUNT]))[DISCENTS_AMOUNT];
#endif // DISCENTE_H_INCLUDED
