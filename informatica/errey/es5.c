/*abbiamo 2 vettori  eseguire lo scambio degli elementi dei due vettori*/
#include <stdio.h>
#include "libreria.h"
#include "libreria.c"
#define Dim 6
int main(){
    int v1[Dim], v2[Dim],k;

    riempiVettoreCasuale(v1,Dim,1,100);
    riempiVettoreCasuale(v2,Dim,1,700);

    stampaVettore(v1,Dim,'-');
    printf("\n");
    stampaVettore(v2,Dim,'-');
    
    for(int i=0; i<Dim;i++){
        k=v1[i];
        v1[i]=v2[i];
        v2[i]=k;
    }
    printf("\n\n");
    stampaVettore(v1,Dim,'*');
    printf("\n");
    stampaVettore(v2,Dim,'*');

}
