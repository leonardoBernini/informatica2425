/*dati imput 10 numeri interi dertmina il maggiore e quante volte compare*/
#include <stdio.h>
#include <limits.h>

int main(){
    int n,cnt=1;
    int nmax=INT_MIN;
    for(int i=0; i<10; i++){
        printf("inserisci un valore: \n");
        scanf("%d",&n);
        if(n>=nmax){
            if(nmax==n){
                cnt++;
            }
            else{
                cnt=1;
            }
            if(n>nmax){
                nmax=n;
            }         
        }

    }printf("il valore piu grande è %d, è compare %d volte",nmax,cnt);

}