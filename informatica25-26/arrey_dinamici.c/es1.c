/*Scrivere un programma in C che gestisca un insieme di numeri interi usando un array dinamico.
Il programma deve permettere, tramite menù:
    1. Aggiungere un numero (espandendo l’array con realloc)
    2. Visualizzare tutti i numeri
    3. Cercare un numero specifico
    4. Ordinare i numeri in ordine crescente
    5. Eliminare un numero scelto
    6. Uscire*/
#include <stdio.h>
#include <stdlib.h>
int menu(){
    int scelta=0;
    printf("1. Aggiungere un numero (espandendo l’array con realloc)\n");
    printf("2. Visualizzare tutti i numeri\n");
    printf("3. Cercare un numero specifico\n");
    printf("4. Ordinare i numeri in ordine crescente\n");
    printf("5. Eliminare un numero scelto\n");
    printf("6. Uscire\n");
    scanf("%d", &scelta);
    return scelta;
}
int trovaP(int v[], int n) {
    int num;
    printf("Quale elemento vuoi cercare? ");
    scanf("%d", &num);
    for (int i = 0; i < n; i++) {
        if (v[i] == num) {
            return i;
        }
    }
    return -1;
}

void quicksort(int v[], int left, int right) {
    if (left >= right) return;
    int i = left, j = right, pivot = v[(left + right) / 2];
    while (i <= j) {
        while (v[i] < pivot) i++;
        while (v[j] > pivot) j--;
        if (i <= j) {
            int tmp = v[i]; v[i] = v[j]; v[j] = tmp;
            i++; j--;
        }
    }
    quicksort(v, left, j);
    quicksort(v, i, right);
}

int main() {
    int scelta;
    int n = 0;
    int *v = NULL;
    do {
        scelta = menu();
        switch (scelta) {
            case 1:
                n++;
                v = (int *)realloc(v, n * sizeof(int));
                if (v == NULL) return 1;
                printf("Inserisci il nuovo valore: ");
                scanf("%d", &v[n-1]);
                break;
            case 2:
                printf("Numeri nell'array:\n");
                for (int i = 0; i < n; i++) {
                    printf("%d\n", v[i]);
                }
                break;
            case 3: {
                int pos = trovaP(v, n);
                if (pos >= 0)
                    printf("Trovato in posizione %d\n", pos);
                else
                    printf("Non trovato\n");
                break;
            }
            case 4:
                if (n > 1) quicksort(v, 0, n-1);
                printf("Array ordinato!\n");
                break;
            case 5: {
                int num, pos = -1;
                printf("Quale elemento vuoi eliminare? ");
                scanf("%d", &num);
                for (int i = 0; i < n; i++) {
                    if (v[i] == num) {
                        pos = i;
                        break;
                    }
                }
                if (pos >= 0) {
                    for (int i = pos; i < n-1; i++)
                        v[i] = v[i+1];
                    n--;
                    v = (int *)realloc(v, n * sizeof(int));
                    printf("Elemento eliminato!\n");
                } else {
                    printf("Elemento non trovato.\n");
                }
                break;
            }
            case 6:
                printf("Uscita...\n");
                break;
            default:
                printf("Scelta non valida!\n");
                break;
        }
    } while (scelta != 6);
    free(v);
    return 0;
}