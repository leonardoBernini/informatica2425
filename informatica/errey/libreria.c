/* 
    Sviluppiamo la funzioni
*/
#include <stdio.h>
#include "libreria.h" //prototipi delle funzioni
#include <stdlib.h>
#include <time.h>
void richiediValori(int vett[],int dim){
    int n=0;

    for(int i=0; i<dim; i++){
       printf("Inserisci un valore: ");
       scanf("%d", &n);
       if(n%2==0)
        vett[i]=n;
    }
    
}

void stampaVett(int vett[],int dim,char sep){
    for(int i=0; i<dim; i++){
        printf("%d%c", vett[i],sep);
    }
}
void randomvet(int v[],int dim,int max,int min){
    srand(time(NULL));
    for(int i=0;i<dim;i++){

        v[i]=rand()%(max-min+1)+min;
    }
}