/*Scrivete una funzione avente due parametri interi(passati per valore) b ed e che calcoli
 la potenza b^e con il metodo delle moltiplicazioni successive*/
#include <stdio.h>
int moltiplico(int n,int n1,int risultato);
int main(){
    int n,n1,risultato;
    printf("inserisci i due numeri:\n");
    scanf("%d%d",&n,&n1);
    risultato=moltiplico(n,n1,risultato);
    printf("%d",risultato);
    return 0;
}
int moltiplico(int n,int n1,int risultato){
    risultato=0;
    for(int i=0; i<n; i++){
        risultato+=n1;
    }
    return risultato ;
}