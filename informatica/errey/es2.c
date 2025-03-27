#include <time.h>
 #include "libreria.h"
 #include "libreria.c"
 
 
 int main(){
    int num=0, vett[10], pos=0;
    srand(time(NULL));
    printf("inserisci un valore: ");
    scanf("%d", &vett[0]);
    for(int i=1; i<10; i++){
        //printf("inserisci un valore: ");
        //scanf("%d", &num);
        num = rand()%7;
        pos=trovaPosizione(vett, i, num); 
        shiftDx(vett, i, pos);
        vett[pos]=num;
    }
    for(int i=0; i<10; i++) printf("%d - ", vett[i]);
    int trovato = ricercaBinaria(vett, 10, 0, 9, 23);
     if(trovato == -1){
        printf("l'elemento cercato non esiste nel vettore");
    } else {
        printf("l'elemento trovato è in posizione %d: %d", trovato, vett[trovato]);
    }
}