/*Calcola il costo sostenuto dalla scolaresca per andare a teatro sapendo che
il biglietto ordinario costa 12 euro, i 2 docenti accompagnatori hanno lo sconto del 50%
e che il numero degli alunni deve essere letto in INPUT
*/
#include <stdio.h>

float main() {
    float costobiglietti,nDocenti,nAlunni,costoTotale;//inserire le variabili
    costobiglietti=12;
    nDocenti=2;
    nAlunni=0,
    costoTotale=0;
    
    printf("inserisci il numero degli alunni ");
    scanf("%f",&nAlunni);
   
    costoTotale=(costobiglietti*nAlunni)+(2*6);//calcolo

    printf("il costo totale è di: %f",costoTotale);
   
    return 0
    
}