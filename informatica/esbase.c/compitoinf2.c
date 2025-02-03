/*Calcola il resto ricevuto dal benzinaio: dopo aver inserito il numero di litri di carburant
introdotto nel motorino e il costo al litro della benzina, il programma deve visualizzare l’importo da
pagare. L’utente digita l’importo di una banconota di valore superiore a tale importo e il
programma visualizza il resto della banconota che questi deve ricevere
*/
#include <stdio.h>

float main() {
    float litri, costoperlitro, costototale, importobanconota, resto;
    litri=0;
    costoperlitro=0;
    costototale=0;
    importobanconota=0;
    resto=0;
    
    printf("Inserisci il numero di litri di carburante ");
    scanf("%f", &litri);

    printf("Inserisci il costo per litro della benzina: ");
    scanf("%f", &costoperlitro);

    costototale = litri * costoperlitro;
    printf("Totale da pagare: %.2f euro\n", costototale);

    printf("Inserisci l'importo della banconota : ");
    scanf("%f", &importobanconota)
}

    