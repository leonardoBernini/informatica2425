/*Dato
un vettore numerico di N posizioni al primo elemento dispari stampare
quanti valori diversi da zero si sono incontrati, il numero dispari
incontrato e la sua posizione nel vettore;*/
#include <stdio.h>
#define DIM 4
#include "libreria.c"
#include "libreria.h"
void dispari(int v[],int dim,int *pd);
int main(){
    int v[DIM];
    int pd=-1;
    riempiVettore(v,DIM);
    dispari( v, DIM,&pd);
}
void dispari(int v[],int dim,int *pd){
    for(int i=0;i<dim;i++){
        if(v[i]/2!=0){
            printf("posizione=%d",i);
            printf("numero dispari=%d",v[i]);
            break;
        }else if (v[i]==0)
        {
            
        }
        
    }
    
}