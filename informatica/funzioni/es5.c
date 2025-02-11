/*Scrivete una funzione con parametro un intero n(passato per valore) che 
stabilisca se n è un numero primo. La funzione restituirà 1 se il numero è primo altrimenti 0.  */
#include <stdio.h>
int primo(int n);
int main(){
    int n,primio;
    printf("inserisci un numero:\n");
    scanf("%d",&n);
    primio=primo(n);
    if(primio==1){
        printf("1");
    }else{
        printf("0");
    }
}
int primo(int n){
    int primo=0;
    for(int i=1; i<n; i++){
        if(n%i==0){
            primo+=i;
        }
    }
    return primo;
}