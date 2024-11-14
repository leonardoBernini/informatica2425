/*
    dati 10 valori stampali
*/
#include <stdio.h>

int main(){
    int num, cnt;
    cnt=0;

    while(cnt<5){
        printf("\ninserisci un numero: ");
        scanf("%d",&num);
        cnt++;
        printf("il valore iserito è: %d", num);

    }
    printf("\nhai raggiunto il limite");
}