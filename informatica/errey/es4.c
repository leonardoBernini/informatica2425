/* caricato un vettore con valori random 
    calcolare la media dei valori
*/

#include <stdio.h>
#include "libreria.c"
#include <time.h>
#include <stdlib.h>
#define DIM 4

int main(){
    int Vet[DIM];
    int max=100, min=1;
    float tot=0;
    riempiVettoreOrdinatoCasuale(Vet,DIM, min, max);
    for(int i=0;i<DIM;i++){
        printf("%d-",Vet[i]);
        tot+=Vet[i];
    }
    printf("\nla media è di: %f",tot/DIM);
}