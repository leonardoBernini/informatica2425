/*VERIFICARE SE UN NUMERO È POTENZA DEL 2 E SE LO È DETERMINARE
L’ESPONENTE.*/
#include <stdio.h>
int main(){
    float n, esponente, contatore;
    n=0;
    esponente=0;
    contatore=0;
    printf("inserisci il numero: ");
    scanf("%f", &n);
    if(n<=20){
        if(n== 2 || n== 4 || n== 0 || n==8 || n==16  ){
            if(n==2){
                contatore=1;
            }
            else if(n==4){
                contatore=2;
            }
            else if(n==8){
                contatore=3;
            }
            else if(n==16){
                contatore=4;
            }
            printf("\n il numero sceltoè multiplo di 2 con potenza %f", contatore);
            

        }
        else{
            printf("il numero non è multiplo di 2");
        }
    }
    else{
        printf("\nil numero scelto non è valido ");
    }
    return 0;
}