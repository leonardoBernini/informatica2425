/* es compito sul poker*/
#include <stdio.h>

int main() {
    int punteggio1, seme1, punteggio2, seme2;

    
    printf("Inserisci il punteggio della prima carta (13=k, 12=q, 11=j, 9-1): ");
    scanf("%d", &punteggio1);
    printf("Inserisci il seme della prima carta (4=cuori, 3=quadri, 2=fiori, 1=picche): ");
    scanf("%d", &seme1);

   
    printf("Inserisci il punteggio della seconda carta (13=k, 12=q, 11=j, 9-1): ");
    scanf("%d", &punteggio2);
    printf("Inserisci il seme della seconda carta (4=cuori, 3=quadri, 2=fiori, 1=picche): ");
    scanf("%d", &seme2);