#include <stdio.h>

int main() {
     
    float costobiglietto, costototale,studentiunder15,biglietigratuiti,numerostudenti;
    costobiglietto=0
    costototale=0
    biglietigratuiti=0
    numerostudenti=0
    studentiUnder15=0

    printf("Inserisci il numero totale di studenti: ");
    scanf("%d", &numerostudenti);

    printf("Inserisci il numero di studenti con meno di 15 anni: ");
    scanf("%d", &studentiunder15);

    printf("Inserisci il costo del biglietto intero: ");
    scanf("%f", &costobiglietto);

    biglietigratuiti = numerostudenti / 12;

    costototale = (numerostudenti * costobiglietto) +
     (studentiunder15 * (costobiglietto * 0.60))

     costototale-= gratuiti * costo_biglietto;

    
    printf("Totale da pagare: %.2f euro\n", costototale);
}