/*
    dati 10 valori stampali
*/
#include <stdio.h>

int main(){
    int num, cnt;
    cnt=0;

    while(cnt<10){
        printf("\ninserisci un numero: ");
        scanf("%d",&num);
        cnt++;
        printf("il valore inserito è: %d", num);

    }
    printf("\nhai raggiunto il limite");
}