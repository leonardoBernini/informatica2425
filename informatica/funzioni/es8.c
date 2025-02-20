/*dato un valore stampare i suoi fattori
es: 28 =2*2*7  2,2,7*/
#include <stdio.h>
int fattori(int n);
int main(){
    int n=0;
    int primo;

    do{
        printf("inserisci un numero:\n");
        scanf("%d", &n);
    }while(n<=0);

    while(n>1){
        n=fattori(n);
    }
    printf("\b ");// '/b ' cancella uno spazio

}
int fattori(int n){
    int fattore=0;
    int cnt=2;
    while(fattore==0){
        if(n%cnt==0){
            printf("%d*",cnt);
            n=n/cnt;
            fattore=1;
        } 
        cnt++;
    }
    return n;
}