/*calcolare la somma dei primi n numeri naturali
es: 5 1+2+3+4+5*/
#include <stdio.h>
int main(){
    int n=0,somma=0;

    do{
        printf("inserisci un numero maggiore di 0:\n");
        scanf("%d", &n);

    }while(n<0);
    
    for(int i=0; i<=n; i++){
        somma+=i;
        printf("%d+", i);
    }
    printf("=%d",somma);
    return 0;
}