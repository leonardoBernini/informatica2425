//pow(n1, 1.0 / n)
#include <stdio.h>

int main() {
    float lato1, lato2;
    float perimetro, area;

    printf("Inserisci il valore del primo lato: ");
    scanf("%f", &lato1);

    printf("Inserisci il valore del secondo lato: ");
    scanf("%f", &lato2);

    if (lato1 == lato2) {
        printf("Il quadrilatero è un Quadrato.");
        perimetro = 4 * lato1;
        area = lato1 *lato1;
    } else {
        printf("Il quadrilatero è un Rettangolo.");
        perimetro = 2 * (lato1 + lato2);
        area = lato1 * lato2;
    }

    printf("Perimetro: %f", perimetro);
    printf("Area: %f", area); 
    return 0;

}