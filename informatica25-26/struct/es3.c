/*visualizare le squadre il cui allenatore prsenta piu di 10 titoli e un punteggio della squadra superiore a 30*/
#include <stdio.h>
#include <stdlib.h>

struct squadra {
    char nome[20];
    char colore[20];
    int punteggio;
    struct allenatore {
        char nomel[20];
        char cognome[20];
        int titoli;
    }mister;
};
typedef struct squadra squadre;

void inserisci_squadre(squadre *teams, int n){
    for(int i=0;i<n;i++){
        printf("inserisci il nome della %d squadra: ",i+1);
        scanf("%s", teams[i].nome);
        getchar();
        printf("inserisci il colore della %d squadra: ",i+1);
        scanf("%s", teams[i].colore);
        getchar();
        printf("inserisci il punteggio della %d squadra: ",i+1);
        scanf("%d", &(teams[i].punteggio));
        printf("inserisci il nome del mister della %d squadra: ",i+1);
        scanf("%s", &(teams[i].mister.nomel));
        getchar();
        printf("inserisci il cognome del mister della %d squadra: ",i+1);
        scanf("%s", &(teams[i].mister.cognome));
        getchar();
        printf("inserisci il numero di titoli vinti del mister %s squadra: ",teams[i].mister.cognome);
        scanf("%d", &(teams[i].mister.titoli));
        getchar();
        
    }
}

void stampa(squadre *teams,int n){  
    for(int i=0; i<n;i++){
        if(teams[i].mister.titoli>10 || teams[i].punteggio>30){
            printf("%s\t",teams[i].nome);
            printf("%s\t",teams[i].colore);
            printf("%d\t",teams[i].punteggio);
            printf("%d\t",teams[i].mister.nomel);
            printf("%d\t",teams[i].mister.cognome);
            printf("%d\n",teams[i].mister.titoli);
        }
    }
}
int main(){
    squadre *team;

     int n;

    do{
        printf("inserisci il numero delle squadre(max 10):\n");
        scanf("%d", &n);
    }while(n<0 || n>10);
    team=(squadre*)malloc(n*sizeof(squadre));
    
    if(team ==NULL){
        printf("errore durante l'allocazione\n ");
        exit(1);
    }

    inserisci_squadre(team, n);
    stampa(team,n);
    free(team);
}