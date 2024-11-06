/*Scrivi un programma in C che permetta di inserire 1 voto di uno studente.
Poi genera casualmente un secondo voto compreso tra 4 e 8.
Quindi permetta di scegliere quale operazione fare tra:
- 1 mostrare la media dei due voti
- 2 mostrare il voto maggiore tra i due
- 3 mostrare il voto minore tra i due.
- 4 mostrare il numero di voti sufficiente tra i due.
Verificare che il voto inserito sia compreso tra 2 e 10.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    float voto, operazione;
    int votorandom, selezione;
    printf("inserisci il voto: ");
    scanf("%f", &voto);
    votorandom= rand() %5+4;
    printf("\nil numero casuale è %d", votorandom);
    printf("\nQuindi permetta di scegliere quale operazione fare tra:\n1 mostrare la media dei due voti\n2 mostrare il voto maggiore tra i due\n3 mostrare il voto minore tra i due.\n4 mostrare il numero di voti sufficiente tra i due.");
    scanf("%d", &selezione);
    if(voto>=2 && voto<=10)
        switch(selezione){
            case 1:
                operazione= (voto+votorandom)/2;
                printf("\n il risultato è %f", operazione);
                break;
            case 2:
                if(voto>votorandom){
                    printf("\n il primo numero è maggiore");

                }
                else if(voto==votorandom){
                    printf("i voti sono uguali");

                }
                else{
                    printf("il voto del computer è maggiore");
                }
            case 3:
                if(voto<votorandom){
                    printf("\n il primo numero è minore");

                }
                else if(voto==votorandom){
                    printf("i voti sono uguali");

                }
                else{
                    printf("il voto del computer è minore");
                }
                break;
            case 4:{
                if(votorandom>=6 && voto>=6 ){
                    printf("\n enreambi i voto sono sufficenti");

                }
                else if(votorandom>=6 || voto>=6){
                    printf("\n un solo voto è sufficente");
                }
                else{
                    printf("\ni voti sono entrembi insufficenti");
                }
                break;
                default:
                    printf("\nopzione non valida");
                break;

            }




        }
    else{
        printf("\nvoto non valido");
    }

        
}