#include <stdio.h>

#define DIM 10  


void riempiVettore(int v[], int dim) {
    int i;
    printf("Inserisci %d numeri:\n", dim);
    for (i = 0; i < dim; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &v[i]);
    }
}


void stampaVettore(int v[], int dim) {
    int i;
    printf("Il vettore è: ");
    for (i = 0; i < dim; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}


void stampaDueMax(int v[], int dim) {
    int i;
    int max1, max2;

    if (v[0] > v[1]) { 
        max1 = v[0];
        max2 = v[1];
    } else {
        max1 = v[1];
        max2 = v[0];
    }

    for (i = 2; i < dim; i++) {
        if (v[i] > max1) { 
            max2 = max1; 
            max1 = v[i]; 
        } else if (v[i] > max2) { 
            max2 = v[i]; 
        }
    }

    printf("I due numeri più grandi sono: %d e %d\n", max1, max2);
}

int main() {
    int vettore[DIM];

    riempiVettore(vettore, DIM);
    stampaVettore(vettore, DIM);
    stampaDueMax(vettore, DIM);

    return 0;
}