#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RIGHE 17
#define COLONNE 10
void riempiMat(int matt[][COLONNE],int righe);
void rispcorette(int rispcorette[],int colonne);
void confronto(int matt[][COLONNE],int righe,int corrette[],int sbagliate[],int rispcorrette[]);



int main(){
    srand(time(NULL));
    int matt[RIGHE][COLONNE];
    int corrette[RIGHE];
    int sbagliate[RIGHE];
    int rispcorrette[RIGHE];
    riempiMat(matt,RIGHE);
    rispcorette(rispcorette, COLONNE);

}

void riempiMat(int matt[][COLONNE],int righe){
    for(int i=0;i<righe;i++){
        for(int j=0;j<COLONNE;j++){
          matt[i][j]=rand()%4+1;
        }
    }
}
void rispcorette(int rispcorette[],int colonne){
    for(int i=0; i<colonne;i++){
        rispcorette=rand()%4+1;  
    }
}
