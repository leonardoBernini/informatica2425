/*Scrivere un programma che legge 2 orari in ore minuti e secondi e dice qual
e viene prima dei due.
(Si risolva l’esercizio senza trasformare tutto in secondi).
*/
#include <stdio.h>
int main(){
    int ora,ora1,minuti,minuti1,secondi,secondi1;
    printf("inserisci il primo orario, prima  l'ora poi minuti e secondi ");
    scanf("%d%d%d",&ora, &minuti, &secondi );

    printf("inserisci il secondo orario,  prima l'ora poi minuti e secondi");
    scanf("%d%d%d",&ora1, &minuti1, &secondi1 );

    if(ora<24 && ora1<24){
        if(minuti<60 && minuti1<60){
            if(secondi<60 && secondi1<60){
                printf("le ore sono accetabili");
            }
            else
                printf("le ore non sono accetabili");
        }
        else 
            printf("le ore non sono accetabili");
    }
    else
        printf("le ore non sono accetabili");  


    if(ora>ora1){
        printf("il primo tempo è maggiore");
    
    } 
    else
        if(ora>ora1){
            printf("il secondo tempo è maggiore");
        }
        else{
            if(minuti>minuti1){
                printf("il primo tempo è maggiore");
            }
            else
            if(minuti>minuti1){
                printf("il secondo tempo è maggiore");
            }
            else{
                if(secondi>secondi1){
                    printf("il primo tempo è maggiore");

                }
                else
                if(secondi1>secondi){
                  printf("il secondo tempo è maggiore");
                }
                else
                printf("i due tempi sono uguali");
            }
                
        }
    
            
        
}
