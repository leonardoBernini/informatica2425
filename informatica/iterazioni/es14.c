/*dato un numero n calcolare il suo quadrato sommando i primi n numeri dispari
es: n=7 7^2=49 
1 3 5 7 9 11 13*/
#include <stdio.h>
int main(){
    int n=0,somma=0,nd=1;
    
    do{
        printf("inserisci un numero da elevare alla 2:\n");
        scanf("%d",&n);
    }while(n<0);

    for(int i=0; i<n; i++){
        somma+=nd;
        nd+=2;
    }printf("%d^2=%d",n,somma);
    return 0;
}   