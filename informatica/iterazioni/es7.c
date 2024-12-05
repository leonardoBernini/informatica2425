/*calcolare il quoziente fra due numeri aplicando il metodo delle sotrazioni successive*/

#include <stdio.h>
int main(){
    int num,num2,quoziente,risultato=0,k;

    do{
        printf("inserisci il primo numero:\n ");
        scanf("%d", &num);
    }while(num<=0);
    
    do{
        printf("inserisci il secondo numero:\n ");
        scanf("%d", &num2);
    }while(num2<=0);
     
    if(num<num2){
        k=num;
        num=num2;
        num2=k;
    }   
    quoziente=num;
    while(quoziente>=num2){
        quoziente-=num2;
        risultato++;

    }printf("il risultato %d è con resto di %d", risultato, quoziente );
    return 0;   
}