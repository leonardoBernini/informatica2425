/*Chiedi all'utente 5 numeri e mostrali in ordine crescente. */

#include <stdio.h>

int main(){
    int n1, n2, n3, n4, n5, temp;
    printf("inserisci il primo valore:");
    scanf("%d", &n1);
    printf("inserisci il secondo valore:");
    scanf("%d", &n2);
    printf("inserisci il terzo valore:");
    scanf("%d", &n3);
    printf("inserisci il quarto valore:");
    scanf("%d", &n4);
    printf("inserisci il quinto valore:");
    scanf("%d", &n5);

    if(n2<n1){
    n1=temp;
    n2=n1;
    n2=temp;
    }
    if(n3<n1){
    n1=temp;
    n3=n1;
    n3=temp;
    }
    if(n4<n1){
    n1=temp;
    n4=n1;
    n4=temp;
    }
    if(n5<n1){
    n1=temp;
    n5=n1;
    n5=temp;
    }
    if(n3<n2){
    n2=temp;
    n3=n2;
    n3=temp;
    }
    if(n4<n2){
    n2=temp;
    n4=n2;
    n4=temp;
    }
    if(n5<n2){
    n2=temp;
    n5=n2;
    n5=temp;
    }
    if(n4<n3){
    n3=temp;
    n4=n3;
    n4=temp;
    }
    if(n5<n3){
    n3=temp;
    n5=n3;
    n5=temp;
    }
    if(n5<n4){
    n4=temp;
    n5=n4;
    n5=temp;
    })
    printf("i valori in ordine crescnete sono: %d%d%d%d%d",n1, n2, n3, n4, n5);
    return 0
}

