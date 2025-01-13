/*Esercizio n°18
Scrivi un programma che esegue il calcolo del fattoriale di un numero num inserito.*/
#include <stdio.h>
int main(){
    int fat,somfat=1;

    printf("inserisci un numero fattoriale:\n");
    scanf("%d", &fat);
    for(int i=1; i<=fat; i++){
        somfat*=i;
        if(i!=fat)
            printf("%d*",i);
        else
            printf("%d",i);
    }
    printf("=%d",somfat);
}