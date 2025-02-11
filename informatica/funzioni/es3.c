/*11 Scrivi un programma che effettua il prodotto tra due numeri 
utilizzando il metodo delle somme successive dopo aver controllato 
l’input e accettato solo valori maggiori di 0*/
#include <stdio.h>
void sommesuccessive(int *n1,int *n, int *molti);
int main(){
    int n,n1,moltipilcazione=0;
    printf("inserisci un numero: ");
    scanf("%d", &n1);
    printf("inserisci un'altro numero: ");
    scanf("%d", &n);
    sommesuccessive(&n1,&n,&moltipilcazione);
    printf("la moltiplicazione fa %d", moltipilcazione);
    
}
void sommesuccessive(int *n1,int *n, int *molti){
    for(int i=0;i<*n; i++){
        *molti+=*n1;
    }

}
