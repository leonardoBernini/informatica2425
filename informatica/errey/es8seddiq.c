#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define COLONNE 4
#define RIGHE 4

void caricaBatteria(int matrice[][COLONNE] , int Correttore[] , int righe);
void confronto(int matrice[][COLONNE] , int Correttore[] , int righe , int Risultati[]);
void stampa(int matrice[][COLONNE] , int Correttore[] , int righe , int Risultati[]);

int main(){
    int matrice[RIGHE][COLONNE] ;
    int Correttore[COLONNE]={}; 
    int Risultati[RIGHE]={};

    srand(time(NULL));
    caricaBatteria( matrice , Correttore , RIGHE);
    confronto( matrice , Correttore , RIGHE , Risultati);
    stampa(matrice , Correttore , RIGHE , Risultati);
}
void caricaBatteria(int matrice[][COLONNE] , int Correttore[] , int righe){
    for (int i = 0; i < righe; i++)
    {
        for (int j = 0; j < COLONNE; j++)
        {
            matrice[i][j]=rand()%4+1;
            if (i==0)
                Correttore[j]=rand()%4+1;
        }
    }
}
void confronto(int matrice[][COLONNE] , int Correttore[] , int righe , int Risultati[]){
    for (int i = 0; i < righe; i++)
    {
        for (int j = 0; j < COLONNE; j++){
            if(matrice[i][j]==Correttore[j])
                Risultati[i]++;
        }
        
    }


}
void stampa(int matrice[][COLONNE] , int Correttore[] , int righe , int Risultati[]){
    for (int i = 0; i < righe; i++)
    {
        for (int j = 0; j < COLONNE; j++){
            printf("matrice[%d][%d]=%d \t",i+1,j+1,matrice[i][j]);
        
    }
    printf("\n");
    }
    for (int i = 0; i < COLONNE; i++)
    {
        printf("correttore[%d]=%d ",i+1,Correttore[i]);
    }
    printf("\n");
    for (int i = 0; i < righe; i++)
    {
        printf("risultati[%d]=%d ",i+1,Risultati[i]);
    }
}
