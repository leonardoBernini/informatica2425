/*Dato numero a più cifre comunicare quale e quante cifre corrispondono alla propria posizione
Esempio: n1=4211 la cifra 1corrisponde alla prima posizione e la cifra 4
corrisponde alla quarta posizione.*/
#include<stdio.h>
int main(){
    int num,pos=1,cifre;
    printf("inserisci un numero\n");
    scanf("%d",num);
    printf("inserisci il numero di cifre\n");
    scanf("%d",cifre);

    for(int i=1; i<=cifre; i++){
        if(num%10==1){
            printf("%d", &i);
        }
        num=num/10;
    }
}