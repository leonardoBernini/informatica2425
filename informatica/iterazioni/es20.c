/*DATI  DUE  NUMERI  A  PIU' CIFRE(STESSO NUMERO DI CIFRE) SCAMBIARE TRA DI LORO LE CIFRE DI POSIZIONE PARI */

#include <stdio.h>
int main(){
    int n,np,nd,n2,cifre=0,cifre2=0,nf1=0,nf2=0,divisore=1;
    
    printf("inserisci il primo numero:\n");
    scanf("%d", &n);
    np=n;
    while(np>0){
        np=np/10;
        cifre++;
    }

    
    do{
        cifre2=0;
        printf("inserisci il secondo numero che deve avere lo stesso numero di cifre del primo:\n");
        scanf("%d", &n2);
        nd=n2;
        while(nd>0){
            nd=nd/10;
            cifre2++;
        }

    }while(cifre2!=cifre);
    
    for(int i=1; i<=cifre; i++){
        if(i%2==0){
            nf1+=(n2%10)*divisore;
            nf2+=(n%10)*divisore;
           
        }
        else{
            nf1+=(n%10)*divisore;
            nf2+=(n2%10)*divisore;
        }
        n=n/10;
        n2=n2/10;
        divisore=divisore*10;
    }
    printf("%d\t%d",nf1,nf2);
}