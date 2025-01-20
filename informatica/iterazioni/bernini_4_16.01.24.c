/*Leggere una serie di numeri interi passati dall’utente dopo aver eseguito una scelta che determini se
stampare i valori in senso crescente o decrescente e fermandosi al primo ‘0’ , tale da stampare solo i
valori che rendono la serie crescente o decrescente e restituire quanti numeri erano stati inseriti.
Esempio: scelta=crescente - l’utente inserisce: 4 10 3 8 16 - numeri inseriti: 5.*/
#include<stdio.h>
int main(){
    int scelta=0,n;
    do{
        printf("inserisci 1 per scegliere l'ordine crescente o 2 per quello decrescente");
        scanf("%d", &scelta);
    }while(scelta==1 || scelta==2);

    if(scelta==1){
        do{
            printf("inserisci un numero");
            scanf("%d",n);

        }while(n!=0);
    }
    else
        do{
            printf("inserisci un numero");
            scanf("%d",n);

        }while(n!=0)
}