/*11 Scrivi un programma che effettua il prodotto tra due numeri 
utilizzando il metodo delle somme successive dopo aver controllato 
l’input e accettato solo valori maggiori di 0*/
#include <stdio.h>
int main(){
    int num,num2, i,somma=0;
    do{
        printf("iserisci il primo numero: ");
        scanf("%d", &num);
    }while(num<0 );
    do{
        printf("iserisci il secondo numero: ");
        scanf("%d", &num2);
    }while(num2<0);
    
    for(i=0; i<num; i++){
        somma+=num2;
           
    }
    printf("il prodotto vale:%d",somma);
}
