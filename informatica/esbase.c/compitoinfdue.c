#include <stdio.h>

int main() {
    // Dichiarazione delle variabili
    float litri, costoperlitro, totaledapagare, importobanconota, resto;

    // Step 1: Richiedere il numero di litri di carburante
    printf("Inserisci il numero di litri di carburante: ");
    scanf("%f", &litri);

    // Step 2: Richiedere il costo al litro
    printf("Inserisci il costo per litro della benzina: ");
    scanf("%f", &costoperlitro);

    // Step 3: Calcolare il totale da pagare
    totaledapagare = litri * costoperlitro;
    printf("Totale da pagare: %.2f euro\n", totaledapagare);

    // Step 4: Richiedere l'importo della banconota
    printf("Inserisci l'importo della banconota (deve essere superiore al totale da pagare): ");
    scanf("%f", &importobanconota);