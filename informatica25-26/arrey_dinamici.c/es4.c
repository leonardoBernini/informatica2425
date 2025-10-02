/*scrivi un orogramma in c che :
1.chiedi all'utente quanti numeri interi vuole inserire ;
2.alloca dinamicamente un array di quella dimensione con malloc();
3.permette all'utente di inserire i numeri ;
4.chiede all'utente se vuole aumentare la dimensione dell'array
    -se si, richiede la nuova dimensione e usa realloc( ) per ridimensionarlo 
    -permette quindi di inserire i nuovi valori aggiunti;
5.infine, stampa tutti gli elementi dll'arrey
    */
#include <stdio.h>
#include <stdlib.h>
int* CreaVettore(int _N){
    int *_vettore=NULL;

    _vettore=(int*)malloc(_N *sizeof(int));

    if(_vettore==NULL){
        printf("Errore di allocazione!\n");
        return NULL;
    }
    return _vettore;
}
int* InserisciValori(int *_vettore, int _N){

    for(int i=0; i<_N; i++){
        printf("inserisci l'elemento: ");
        scanf("%d", &_vettore[i]);
    }
    return _vettore;
}
int* ridimensionaArrey(int *_vettore, int n,int ndim){
    if(ndim>n){
        for(int i=n;i<ndim;i++){
            printf("inserisci il %d dell'arrey",i);
            scanf("%d",&_vettore[i]);
        }
        if(_vettore== NULL){
            exit(1);
        }return _vettore;
        
        
    }
}
    
        
        
    

void StampaVettore(int *_vettore, int _N){
    
    printf("hai inserito i seguenti elementi: ");
    for(int i=0; i<_N; i++){
        printf("%d\t", _vettore[i]);
    }
    printf("\n");
}
int main(){
    int *vett=NULL;
    int n;
    int ndim;
    int scelta=0;

    printf("quanti numeri vui inserire:\n");
    scanf("%d",&n);
    
    vett=CreaVettore(n);
    vett=InserisciValori(vett, n);
    
    printf("vuoi modificare il vettore , se si premi 1:\n");
    scanf("%d",&scelta);
    
    if(scelta==1){
        printf("inserisci la nuova dimensione:");
        scanf("%d",&ndim);
        vett=(int*)realloc(vett,ndim*sizeof(int));
    vett=ridimensionaArrey(vett, n, ndim);
    n=ndim;
    StampaVettore(vett,n);
    free(vett);
}
