/*dato un valore eseguire la conversione da decimale a binario*/
#include <stdio.h>
#include <math.h>
long converti(int _n);
int main(){
    int num;
    long conv;

    do{
        printf("inserisci un numero");
        scanf("%d", &num);
    }while(num<0);
    conv=converti(num);
    printf("%ld\n",conv);
}
long converti(int _n){
    int quoziente=_n;
    int resto;
    int cont=0;
    int _conv=0;
    while(quoziente!=0){
        resto=quoziente%2;
        quoziente=quoziente/2;
        _conv=pow(10,cont);
        cont++;

    }
    return _conv;
}
