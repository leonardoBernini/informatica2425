/*creare una struct Squadra contenente le seguenti  iformazioni: nome, colore, punteggio*/
#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char nome[20];
    char colore[20];
    int punteggio;

}squadra;
void stampa(squadra *teams,int n){
    for(int i=0; i<n;i++){
        printf("%s\t",teams[i].nome);
        printf("%s\t",teams[i].colore);
        printf("%d\n",teams[i].punteggio);
    }
}
int main(){
    squadra *teams;
    int n;

    do{
        printf("inserisci il numero delle squadre(max 10):\n");
        scanf("%d", &n);
    }while(n<0 || n>10);
    
    teams=(squadra*)malloc(n*sizeof(squadra));
    
    if(teams ==NULL){
        printf("errore durante l'allocazione\n ");
        exit(1);
    }
    
    for(int i=0;i<n;i++){
        printf("inserisci il nome della squadra: ");
        scanf("%s", teams[i].nome);
        getchar();
        printf("inserisci il colore della squadra: ");
        scanf("%s", teams[i].colore);
        getchar();
        printf("inserisci il punteggio della squadra: ");
        scanf("%d", &(teams[i].punteggio));
        getchar();
        
    }
    
    stampa(teams, n);
    free(teams);
}