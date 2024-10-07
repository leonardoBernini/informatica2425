#include <stdio.h>

int main() {
    int numero, migliaia, centinaia, decine, unita;
    
    printf("Inserisci un numero minore  di 10.000: ");
    scanf("%d", &numero);
    
  
    
    if (numero >= 1000)
        printf("Il numero %d è formato da 4 cifre.\n", numero);
    else
         if (numero >= 100)
            printf("Il numero %d è formato da 3 cifre.\n", numero);
    else if (numero >= 10)
        printf("Il numero %d è formato da 2 cifre.\n", numero);
    else
        printf("Il numero %d è formato da 1 cifra.\n", numero);
    
    
    migliaia = numero / 1000;
    centinaia = (numero % 1000) / 100;
    decine = (numero % 100) / 10;
    unita = numero % 10;
    
  
    printf("Migliaia: %d\n", migliaia);
    printf("Centinaia: %d\n", centinaia);
    printf("Decine: %d\n", decine);
    printf("Unità: %d\n", unita);
    
    return 0;
}