/*Supponete
che la parità di scambio tra Euro e Dollaro sia la seguente: 1 € =
1,23 $. Il programma deve chiedere all'utente se intende cambiare:     
- Dollari in Euro;
- Euro in Dollari.
Data
una somma di denaro calcolare il controvalore*/
#include<stdio.h>
int main(){
    float sommadenaro=0, sommaconvertita=0;
    int scelta=0;
    const float tasso=1.23;

    printf("inserisci l'operazione per il cambio/euro,2 per cambio euro/dollaro: ");
    scanf("%d",&scelta);
    printf("inserisci il valore da convertire: ");
    scanf(" %f",&sommadenaro);
    switch(scelta){
        case 1:
            break;
            sommaconvertita= sommadenaro/tasso;
            printf("%f $ =%f €",sommadenaro,sommaconvertita);
        case 2:
            sommaconvertita= sommadenaro*tasso;
            printf("%f € =%f $",sommadenaro,sommaconvertita);
            break;
        default:
            printf("scelta non valida");
            break;

    }

    return 0;
}

    


