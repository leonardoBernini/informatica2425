#include <stdio.h>

int main() {
    int lpGiocatore1, lpGiocatore2;
    int danno, scelta;
    int turno = 1;
    char rule;

    // Selezione della modalità di gioco
    do {
        printf("Giochi nel modo classico (8000 LP iniziali)? y/n: ");
        scanf(" %c", &rule);

        if (rule == 'y') {
            lpGiocatore1 = 8000;
            lpGiocatore2 = 8000;
        } else if (rule == 'n') {
            printf("\nInserisci i Life Points iniziali del Giocatore 1: ");
            scanf("%d", &lpGiocatore1);
            printf("Inserisci i Life Points iniziali del Giocatore 2: ");
            scanf("%d", &lpGiocatore2);
        } else {
            printf("Input non valido. Inserisci 'y' per il classico o 'n' per personalizzare i Life Points.\n");
        }
    } while (rule != 'y' && rule != 'n');

    // Ciclo principale del duello
    while (lpGiocatore1 > 0 && lpGiocatore2 > 0) {
        printf("\n--- Turno %d ---\n", turno);
        
        printf("Giocatore 1 o Giocatore 2 (1 o 2) sta subendo o recuperando punti?: ");
        scanf("%d", &scelta);

        printf("Inserisci la quantità di punti da sottrarre (danno) o aggiungere (recupero): ");
        scanf("%d", &danno);

        if (scelta == 1) {
            lpGiocatore1 += danno; // Aggiorna i LP del giocatore 1
            printf("Giocatore 1 ha ora %d LP\n", lpGiocatore1);
        } else if (scelta == 2) {
            lpGiocatore2 += danno; // Aggiorna i LP del giocatore 2
            printf("Giocatore 2 ha ora %d LP\n", lpGiocatore2);
        } else {
            printf("Scelta non valida. Riprova.\n");
            continue;
        }

        turno++;

        // Controllo per dichiarare il vincitore
        if (lpGiocatore1 <= 0) {
            printf("Giocatore 2 vince il duello!\n");
        } else if (lpGiocatore2 <= 0) {
            printf("Giocatore 1 vince il duello!\n");
        }
    }

    return 0;
}