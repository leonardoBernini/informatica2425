/*Gioco
della Morra cinese: supponendo sasso=1, carta=2, forbice=3, chiedere
all’utente la sua scelta e far generare al computer la sua.
Stabilire il vincitore
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL)); 

    char segno;
    int segno2;

    printf("Inserisci il tuo risultato (s = Sasso, c = Carta, f = Forbice): ");
    scanf(" %c", &segno);

    segno2 = rand() % 3 + 1;  

    if (segno2 == 1) {  
        if (segno == 's') {
            printf("E' un pareggio\n");
        }
        if (segno == 'c') {
            printf("Hai vinto\n");
        }
        if (segno == 'f') {
            printf("Hai perso\n");
        }
    } else if (segno2 == 2) {  
        if (segno == 'c') {
            printf("E' un pareggio\n");
        }
        if (segno == 's') {
            printf("Hai perso\n");
        }
        if (segno == 'f') {
            printf("Hai vinto\n");
        }
    } else if (segno2 == 3) {  
        if (segno == 'f') {
            printf("E' un pareggio\n");
        }
        if (segno == 'c') {
            printf("Hai perso\n");
        }
        if (segno == 's') {
            printf("Hai vinto\n");
        }
    }
    if(segno!='s'){
        if(segno!='c'){
            if(segno!='f'){
                printf("errore");
            }
        }
    }
   

    return 0;
}