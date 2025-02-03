#include <stdio.h>

int main() {
    int mese, giorno;

    // Input del giorno e del mese
    printf("Inserisci il giorno: ");
    scanf("%d", &giorno);
    printf("Inserisci il mese: ");
    scanf("%d", &mese);

   
    if ((mese == 12 && giorno >= 22) || mese == 1 || mese == 2 || (mese == 3 && giorno <= 20)) {
        printf("Inverno\n");
    } else if ((mese == 3 && giorno >= 21) || mese == 4 || mese == 5 || (mese == 6 && giorno <= 22)) {
        printf("Primavera\n");
    } else if ((mese == 6 && giorno >= 23) || mese == 7 || mese == 8 || (mese == 9 && giorno <= 22)) {
        printf("Estate\n");
    } else if ((mese == 9 && giorno >= 23) || mese == 10 || mese == 11 || (mese == 12 && giorno <= 21)) {
        printf("Autunno\n");
    } else {
        printf("Data non valida.\n");
    }

    return 0;