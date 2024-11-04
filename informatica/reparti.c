/*Un
grande magazzino ha 4 reparti, rappresentati con i numeri da 1 a 4.
La Direzione decide di applicare sui prodotti di ciascun reparto
sconti con percentuali differenziate:-  reparto
   1 = nessuno sconto -  reparto
   2 = sconto 3%-  reparto
   3 = sconto 2%-  reparto
   4 = sconto 5%
Dati
reparto di appartenenza e prezzo di un prodotto, calcolare e
visualizzare il prezzo scontato.*/
#include <stdio.h>  
int main(){
    float prezzo, sconto;
    int reparto,segnalino;
    segnalino=0;
    printf("inserisci il prezzo:\n");
    scanf("%f", &prezzo);
    printf("inserisci il reparto:\n");
    scanf("%d", &reparto);
    switch (reparto){
        case 1:
            sconto=0;
            break;
        case 2:
            sconto=3;
            break;
        case 3:
            sconto=5;
            break;
        case 4:
            sconto=2;
            break;
        default:
            printf("reparto non valido");
            segnalino=1;
            break;
            
    }
     if (segnalino == 0) {
        prezzo = prezzo - (prezzo * sconto / 100);  // Calcola il prezzo finale con lo sconto applicato
        printf("Il prezzo finale è di %f€", prezzo);
     }
   return 0;


}