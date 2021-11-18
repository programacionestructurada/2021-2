/** TraspuestaDMatrices.c Muestra la traspuesta de una matriz */
#include <stdio.h>
#include <stdlib.h>

void print_mat(float **A,unsigned int rows,unsigned int cols);
/** get_traspose()
 * Obtiene la traspuesta de la matriz A de rows filas y cols
 * columnas.
 * @param A: doble apuntador a la matriz original
 * @param rows: cantidad de tilas de la matriz original
 * @param cols; cantidad de columnas de la matriz original
 * @return: doble apuntador a la matriz traspuesta
 */
float **get_traspose(float **A,unsigned int rows,unsigned int cols);
int main(int argc, char *argv[]) {
	int i,j;
	float A[2][3]={{2,4,6},{8,10,12}};

	float **M;
	printf("MATRICES TRASPUESTAS\n");
	printf("A =\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("\t%8.4f",A[i][j]);//0,1 0,1 0,2
		}                             //1,0 1,1 1,2
		printf("\n");
	}
	printf("\n\n");
	for(j=0;j<3;j++){
        for(i=0;i<2;i++){
            printf("\%8.4f",A[i][j]);//0,0 1,0
        }                            //0,1 1,1
        printf("\n");                //0,2 1,2
	}
	printf("\n\n");
    M = (float **)malloc(2*sizeof(float *));
    M[0] = (float *)malloc(3*sizeof(float));
    M[1] = (float *)malloc(3*sizeof(float));
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
            M[i][j] = A[i][j];
		}
    }
    printf("M = \n");
    print_mat(M,2,3);
    printf("\n\n");
    float **M_t = get_traspose(M,2,3);
    printf("Traspuesta de la matriz M:\n");
    print_mat(M_t,3,2);
    printf("\n\n");

    free(M);
    free(M_t);
	return 0;
}

void print_mat(float **A,unsigned int rows,unsigned int cols){
    unsigned int i,j;
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("\t%8.4f",A[i][j]);
		}
		printf("\n");
	}
}

/** get_traspose()
 * Obtiene la traspuesta de la matriz A de rows filas y cols
 * columnas.
 * @param A: doble apuntador a la matriz original
 * @param rows: cantidad de tilas de la matriz original
 * @param cols: cantidad de columnas de la matriz original
 * @return: doble apuntador a la matriz traspuesta
 */
float **get_traspose(float **A,unsigned int rows,unsigned int cols)
{
 unsigned int i,j,fil,col;
 float **A_t = (float **)malloc(cols*sizeof(float *));
 for(i=0;i<cols;i++){
  *(A_t + i) = (float *)malloc(rows*sizeof(float));
 }
 fil = cols;
 col = rows;
 for(i=0;i<fil;i++){
   for(j=0;j<col;j++){
     #if 0 // arr[x] = *(arr + x)
     A_t[i][j] = A[j][i];
     #else
     *(*(A_t + i) + j) = A[j][i];
     #endif
   }
 }
 return A_t;
}/*end get_traspose()*/
