#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void menu(int *scelta);

int main() {
    int scelta;
    float n, n1, risultato = 0;
    char quantita;
    
    menu(&scelta);
    
    switch (scelta) {
        case 1:
            printf("Inserisci un numero da sommare: ");
            scanf("%f", &n1);
            risultato = n1;
            do {
                printf("Inserisci un altro numero da sommare: ");
                scanf("%f", &n1);
                risultato += n1;
                printf("Se vuoi continuare a sommare premi 'y': ");
                scanf(" %c", &quantita);
            } while (quantita == 'y');
            break;
        
        case 2:
            printf("Inserisci un numero: ");
            scanf("%f", &n1);
            risultato = n1;
            do {
                printf("Inserisci un altro numero da sottrarre: ");
                scanf("%f", &n1);
                risultato -= n1;
                printf("Se vuoi continuare a sottrarre premi 'y': ");
                scanf(" %c", &quantita);
            } while (quantita == 'y');
            break;
        
        case 3:
            printf("Inserisci un numero da moltiplicare: ");
            scanf("%f", &n1);
            risultato = n1;
            do {
                printf("Inserisci un altro numero da moltiplicare: ");
                scanf("%f", &n1);
                risultato *= n1;
                printf("Se vuoi continuare a moltiplicare premi 'y': ");
                scanf(" %c", &quantita);
            } while (quantita == 'y');
            break;
        
        case 4:
            printf("Inserisci il dividendo: ");
            scanf("%f", &n1);
            do {
                printf("Inserisci il divisore (diverso da 0): ");
                scanf("%f", &n);
                if (n == 0) {
                    printf("Errore: il divisore non può essere 0.\n");
                }
            } while (n == 0);
            risultato = n1 / n;
            break;
        
        case 5:
            printf("Inserisci la base: ");
            scanf("%f", &n1);
            printf("Inserisci l'esponente: ");
            scanf("%f", &n);
            risultato = pow(n1, n);
            break;
        
        case 6:
            printf("Inserisci un numero: ");
            scanf("%f", &n1);
            do {
                printf("Inserisci il valore della radice (maggiore di 0): ");
                scanf("%f", &n);
                if (n == 0) {
                    printf("Errore: la radice non può essere 0.\n");
                }
            } while (n == 0);
            risultato = pow(n1, 1.0 / n);
            break;
        
        default:
            printf("Opzione non valida.\n");
            
    }
    
    printf("Il risultato è: %.2f\n", risultato);
    
    return 0;
}

void menu(int *scelta) {
    printf("Scegli un'operazione:\n");
    printf("1. Somma\n");
    printf("2. Sottrazione\n");
    printf("3. Moltiplicazione\n");
    printf("4. Divisione\n");
    printf("5. Elevamento a potenza\n");
    printf("6. Radice\n");
    printf("Scelta: ");
    scanf("%d", scelta);
    system("clear");
}
