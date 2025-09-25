/*scrivere un programma in linguaggio c che :
    1) allochi dinamicamente un array iniziale di n numeri
    2)  inserimento dei valori
    3)stampa array
    4)calcoli la somma degli elementi multipli di 3
    5) creare un nuovo arrey contenetr solo valori dispari
    */
#include <stdio.h>
#include<stdlib.h>
int* creaArey(int n){
    int *arrey;
    
    arrey=(int*)malloc(n*sizeof(int));
    if( arrey== NULL){
        return 1;
    }
    return arrey;
    
}
int* riempiArrey(int n,int *arrey){
    for(int i=0; i<n;i++){
        printf("inserisci il %d elemento: ",i+1);
        scanf("%d",&arrey[i]);
    }
    return arrey;
}
int stampaArey(int n,int *arrey){
    for(int i=0; i<n;i++){
        printf("%d\t",arrey[i]);
    }
}
int main(){
    int *arrey=NULL;
    int n=0;
    do{
        printf("inserisci la quantità degli elementi: ");
        scanf("%d", &n);
    }while(n<0);
    arrey=creaArey(n);
    arrey=riempiArrey(n,arrey);
    stampaArey(n,arrey);
    free(arrey);
}