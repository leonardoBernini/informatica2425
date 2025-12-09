/*esempio di una struttura complessa dacendo acesso al campo variabile e in modalita puntatore alla struttura*/
#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char nome[20];
    char cognome[20];
    int eta;
}persona;

int main(){
    persona  p1;
    persona *p2;

    //inseria,o le informzioni in p1
    printf("inserisci il nome:");
    scanf("%s",p1.nome);
    getchar();
    printf("inserisci il cognome: ");
    scanf("%s",p1.cognome);
    getchar();
    printf("inserisci l'eta: ");
    scanf("%d",&(p1.eta));
    getchar();

    printf("dati della persona %s %s %d\n",p1.nome,p1.cognome,p1.eta);
    //inseriamo le informzioni in p2
    p2=(persona*)malloc(sizeof(persona));
    printf("inserisci il nome:");
    scanf("%s",p2->nome);
    getchar();
    printf("inserisci il cognome: ");
    scanf("%s",p2->cognome);
    getchar();
    printf("inserisci l'eta: ");
    scanf("%d",&(p2->eta));
    getchar();
    printf("dati della persona %s %s %d\n",p2->nome,p2->cognome,p2->eta);
}