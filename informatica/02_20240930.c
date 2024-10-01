/*stabilire sei dati due numeri
A e B controlare se a è maggiore, uguale 
o maggiore di b*/
#include <stdio.h>
int main(){
    int A=0;
    int B=0;

    printf("inserisci il primo valore ");
    scanf("%d",&A);
    printf("inserisci il secondo valore");
    scanf("%d",&B);

    if(A==B){
        printf(" i due valori sono uguali");
    }
    else{
        if(A>B)
            printf("A%d è maggiore di B%d", A,B);
        else 
            printf("A%d è minore di B%d", A,B);
    }
    return 0;

}