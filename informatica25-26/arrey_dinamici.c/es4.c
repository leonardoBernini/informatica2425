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

int* CreaVettore(int N){
    int *vettore = (int*)malloc(N * sizeof(int));
    if(vettore == NULL){
        printf("Errore di allocazione!\n");
        exit(1);
    }
    return vettore;
}

void InserisciValori(int *vettore, int N){
    for(int i = 0; i < N; i++){
        printf("Inserisci l'elemento %d: ", i+1);
        scanf("%d", &vettore[i]);
    }
}

int* RidimensionaArray(int *vettore, int n, int ndim){
    int *tvettore = (int*)realloc(vettore, ndim * sizeof(int));
    if(tvettore == NULL){
        printf("Errore di realloc!\n");
        exit(1);
    }

    for(int i = n; i < ndim; i++){
        printf("Inserisci il nuovo elemento %d: ", i+1);
        scanf("%d", &vettore[i]);
    }

    return tvettore;
}

void StampaVettore(int *vettore, int N){
    printf("Hai inserito i seguenti elementi:\n");
    for(int i = 0; i < N; i++){
        printf("%d\t", vettore[i]);
    }
    printf("\n");
}

int main(){
    int *vett = NULL;
    int n, ndim;
    int scelta;

    printf("Quanti numeri vuoi inserire: ");
    scanf("%d", &n);

    vett = CreaVettore(n);
    InserisciValori(vett, n);

    printf("Vuoi modificare il vettore? (1 = si, 0 = no): ");
    scanf("%d", &scelta);

    if(scelta == 1){
        printf("Inserisci la nuova dimensione: ");
        scanf("%d", &ndim);
        if(ndim > 0){
            vett = RidimensionaArray(vett, n, ndim);
            n = ndim;
        } else {
            printf("dimensione non valida .\n");
        }
    }

    StampaVettore(vett, n);
    free(vett);

    return 0;
}
