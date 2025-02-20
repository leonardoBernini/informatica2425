/*quadraro con dispari*/
#include <stdio.h>
int quadrato(int n){
    int dispari=0;
    for(int i=1; i<=n*2;i+=2){ 
        printf("%d+",i);
        dispari+=i;
    }
    return dispari;

}
int main(){
    int n,dispari=0;
    do{
        printf("inserisci un numero:\n");
        scanf("%d", &n);
    }while(n<0);
    dispari=quadrato(n);
    printf("\b");
    printf("=%d",dispari);
}