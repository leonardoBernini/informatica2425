/*carica la marice quadrata a spirale*/
#include <stdio.h>
#define n 4
void riempiMat(int mat[][n]){
    int top=0, bottom=n-1;
    int left=0, right=n-1, num=1;
    
    while(num<=n*n){
        for(int i=left; i<=right; i++){
            mat[top][i]=num++;
        }top++;
        for(int i=top; i<=bottom; i++)
            mat[i][right]=num++;
        right--;
        for(int i=right; i>=left;i--)
            mat[bottom][i]=num++;
        bottom--;
        for(int i=bottom; i>=top; i--)
            mat[i][left]=num++;
        left;
    }
}
void stampaMat(int mat[][n], int DIM){
    for(int i=0; i<DIM; i++){
        for(int j=0;j<DIM;j++){
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int mat[n][n];
    riempiMat(mat);
    printf("la matrice a spirale è:\n");
    stampaMat(mat,n);
}