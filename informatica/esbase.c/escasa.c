/* Scrivi un programma che legge un numero NUM strettamente positivo e
 visualizza tutti i numeri pari inferiori a tale numero fino a 0*/
 #include <stdio.h>
int main(){
    int num;
    do{
        printf("inserisci un numero: \n");
        scanf("%d", &num);
    }while(num<0);
    do{
        printf("\n%d",num);
        num=num-1;
    }while(num>0);

}