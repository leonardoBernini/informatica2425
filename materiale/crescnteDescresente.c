#include <stdio.h>

int main() {
    int a, b, c, temp;

    // Inserimento dei numeri
    printf("Inserisci il primo numero: ");
    scanf("%d", &a);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &b);
    printf("Inserisci il terzo numero: ");
    scanf("%d", &c);

    // Ordinamento in ordine crescente
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    // Ora a, b, c sono in ordine crescente
    printf("\nOrdine crescente: %d, %d, %d\n", a, b, c);

    // Ordine decrescente
    printf("Ordine decrescente: %d, %d, %d\n", c, b, a);

    return 0;
}