/*  Scrivi un programma in C che:
    1. Chiede all’utente quanti numeri interi vuole inserire;
    2. Alloca dinamicamente un array di quella dimensione con malloc();
    3. Permette all’utente di inserire i numeri;
    4. Chiede all’utente se vuole aumentare la dimensione dell’array;
        - Se sì, richiede la nuova dimensione e usa realloc() per ridimensionarlo;
        - Permette quindi di inserire i nuovi valori negli spazi aggiunti;
    5. Infine, stampa tutti gli elementi dell’array.
*/
#include <stdio.h>
#include <stdlib.h>
int* alloca_arrey(int *arrey,int dim ){
    int n;
    
    arrey=(int*)malloc(dim*sizeof(int));
    if(arrey==NULL){
        exit(1);
    }
    
    for(int i=0;i<dim; i++){
        printf("inserisci li %d elemento: \n",i+1);
        scanf("%d",&n);
        arrey[i]=n;
    }
    return arrey;
}
void stampa_arrey(int *arrey,int dim){
    for(int i=0; i<dim; i++){
        printf("%d\t",arrey[i]);
    }
}
int* realloca_arrey(int *arrey, int *dim){
    int nuovadim;
    int n;
    printf("inserisci la nuova dimensione: ");
    scanf("%d",&nuovadim);
    arrey=(int*)realloc(arrey,nuovadim*sizeof(int));
    if(arrey==NULL){
        exit(1);
    }

    for(int i=(*dim); i<nuovadim; i++){
        printf("inserisci il %d elemento: ",i+1);
        scanf("%d",&n);
        arrey[i]=n;
    }
    *dim=nuovadim;
    return arrey;
}
int main (){
    int *arrey=NULL;
    int dim;
    int scelta;

    printf("inserisci la dimensione dell'arrey : ");
    scanf("%d",&dim);

    arrey=alloca_arrey(arrey,dim);
    stampa_arrey(arrey, dim);
    printf("\nvuoi modificare la dimensione dell'arrey se si premi 1: ");
    scanf("%d",&scelta);
    if(scelta==1)
        arrey=realloca_arrey(arrey, &dim);
    
    
    stampa_arrey(arrey, dim);

    free(arrey);
}