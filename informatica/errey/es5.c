/*abbiamo 2 vettori  eseguire lo scambio degli elementi dei due vettori*/
#include <stdio.h>
#include "libreria.h"
#include "libreria.c"
#define Dim 6
void scambiore(int v1[],int v2[]){
    int k;
    for(int i=0; i<Dim;i++){
        k=v1[i];
        v1[i]=v2[i];
        v2[i]=k;
    }
}
int main(){
    int v1[Dim], v2[Dim];

    riempiVettoreCasuale(v1,Dim,1,100);
    riempiVettoreCasuale(v2,Dim,1,700);
    
    stampaVettore(v1,Dim,'-');
    printf("\n");
    
    stampaVettore(v2,Dim,'-');
    scambiore(v1, v2);
    
    printf("\n\n");
    
    stampaVettore(v1,Dim,'*');
    printf("\n");
    stampaVettore(v2,Dim,'*');

}
