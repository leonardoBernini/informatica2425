/*dato un numero a piu cifre eseguire
la somma delle cifre e stabilire se 
è divisibile per 3*/

#include<stdio.h>
int main(){
    int num, q, r,somma=0;

    printf("inserisci un valore:\n");
    scanf("%d", &num);
    q=num;
    while(num>0){
        somma=(num%10)+somma;
        num=num/10;
    }
    
    printf("%d",somma);
    if(q%3==0){
        printf("\n%d è divisibile per 3",q);
    }
}
