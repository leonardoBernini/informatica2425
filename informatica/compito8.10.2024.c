/* dato un numero a piu cifre 
stampare le cifre che compongono il numero*/

#include <stdio.h>
int main(){
    int num, q, r ;
    num=0;
    r=0;
    q=0;
    printf("inserisci il numero");
    scanf("%d", &num);

    q=num/10;
    r=num%10;
    printf(" %d è la prima cifra", &r);
    
    r=q%10;
    q=q/10;
    printf("%d è la second cifra", &r);

    r=q%10;
    q=q/10;
    printf("%d è la terza cifra", &r);




}