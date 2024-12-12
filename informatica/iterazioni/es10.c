/*dati n numeri in imput (con n>5) calcolare la somma dei numeri negativi e positivi*/
#include <stdio.h>
int main(){
    int n,n1,somn=0,somp=0;

    do{
        printf("inserisci un numero maggiore di 5 :\n");
        scanf("%d", &n);
    }while(n<=5);
    for(int i=0; i<n; i++){
        printf("inserisci un valore :\n");
        scanf("%d", &n1);
        if(n1<0){
            somn+=n1;

        }
        else{
            somp+=n1;
        }
    }
    printf("la somma dei numeri positivi è : %d, invece di quelli negativi è: %d",somp,somn);
}