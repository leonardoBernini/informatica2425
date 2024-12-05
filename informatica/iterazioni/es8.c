/*dati n numeri, sommarli 4 a 4  termina non appena intuduce un 0*/
#include <stdio.h>
int main(){
    int n,cnt=0,r=0;

    
    do{
        printf("inserisci un numero: ");
        scanf("%d", &n);
        r=r+n;
        cnt++;
        if(cnt==4 && n!=0){
            printf("la somma è %d \n",r);
            cnt=0;
            r=0;
        }

    }while(n!=0);
}