/*CONTARE IL NUMERO DI CIFRE DI CUI SI COMPONE UN NUMERO DATO E
COMUNICARE QUANTE VOLTE COMPARE LA CIFRA DI VALORE K CHIESTA
ALL’UTENTE.
N.B.: accettare valori che vanno da 0 a 9999
ES: 3 è composto da 1 cifra e supponendo k=5 allora k compare 0 volte, 56 è composto
da 2 cifre e k compare 1 volta*/

#include <stdio.h>
int main(){
    float  calcolo, calcolo1;
    int k, contatore, numero;
    numero=0;
    k=0;

    printf("inserisci il numero: ");
    scanf("%f", &numero);
    if(numero>=0 || numero<=0){
        printf("\ninserisci la cifra");
        scanf("%f", &k);
        calcolo= numero % k;
        if(calcolo==k){
            contatore=1;
            
        }
        calcolo1=numero/k;
        if(calcolo==0){
            print("\nla cifra scelta compare: %d", contatore);

        }
        else{
            calcolo=calcolo;
        }


        

        

    }
    else{
        printf("\nnumero non valido");
    }
    return 0;
}