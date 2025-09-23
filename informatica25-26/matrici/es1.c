/*carica la marice cuadrata a spirale*/
#include <stdio.h>
#define dim 5
void stampaMat(int mat[][dim], int DIM){
    for(int i=0; i<DIM; i++){
        for(int j=0;j<DIM;j++){
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int mat[dim][dim];
    int val = 1;
    int n = dim;

     
    for (int j = 0; j < n; j++)
        mat[0][j] = val++;
    
    for (int i = 1; i < n; i++)
        mat[i][n-1] = val++;
    
    for (int j = n-2; j >= 0; j--)
        mat[n-1][j] = val++;
    
    for (int i = n-2; i > 0; i--)
        mat[i][0] = val++;

    
    for (int j = 1; j < n-1; j++)
        mat[1][j] = val++;
    
    for (int i = 2; i < n-1; i++)
        mat[i][n-2] = val++;
    
    for (int j = n-2; j > 0; j--)
        mat[n-2][j] = val++;

    stampaMat(mat, dim);
    return 0;
}