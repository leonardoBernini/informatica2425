
/*Scrivi un programma che legge in input il valore di tre lati di un triangolo, 
individua se si tratta di un triangolo equilatero e ne 
calcola in tal caso l’area e il perimetro
*/
#include <stdio.h>
int main() {
    float lato1, lato2, lato3;
    float perimetro, area;

    printf("Inserisci il valore del primo lato: ");
    scanf("%f", &lato1);

    printf("Inserisci il valore del secondo lato: ");
    scanf("%f", &lato2);

    printf("Inserisci il valore del terzo lato: ");
    scanf("%f", &lato3);


    if (lato1 == lato2 && lato2 == lato3) {
        printf("Il triangolo è equilatero.");

        
        perimetro = 3 * lato1;

        area = (lato1 * lato1 ) / 2;

      
        printf("Perimetro: %2f", perimetro);
        printf("Area: %f", area);
    } else {
        printf("Il triangolo non è equilatero.");
    }