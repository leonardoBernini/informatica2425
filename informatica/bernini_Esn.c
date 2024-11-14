/*DATA UNA COPPIA DI NUMERI INTERI COSTRUIRE UN MENÙ TALE CHE
PREVEDA:
1) LA SOMMA IN VALORE ASSOLUTO;
2) LA DIFFERENZA TRA IL MAGGIORE E IL MINORE;
3) GENERATO UN VALORE K(INTERO) DETERMINARE CHI DEI VALORI SI
AVVICINA DI PIÙ;
4) DETERMINARE SE UNO È MULTIPLO DELL’ALTRO.*/
#include <stdio.h>
int main(){
    int a, b, k, opzione;
    float operazione;
    a=0;
    b=0;
    k=0;
    opzione=0;
    operazione=0;

    printf("inserisci il primo numero: ");
    scanf("%d", &a);
    printf("inserisci il secondo numero: ");
    scanf("%d", &b);
    
    printf("\nLA SOMMA IN VALORE ASSOLUTOLA \nDIFFERENZA TRA IL MAGGIORE E IL MINORE \nGENERATO UN VALORE K(INTERO) DETERMINARE CHI DEI VALORI SI AVVICINA DI PIÙ\nDETERMINARE SE UNO È MULTIPLO DELL’ALTRO.");
    scanf("%d", &opzione);
    switch(opzione){
        case 1:
            if(a<0){
                a=a*-1;
            }
            if(b<0){
                b=b*-1;

            }
            operazione=a+b;
            printf("\nil risultato è %f", operazione);
            break;
        case 2:
            if(b>a){
                operazione=b-a;
                printf("\nil risultato è %f", operazione);
            }
            else{
                operazione=a-b;
                printf("\nil risultato è %f", operazione);
            }
            break;
        case 3:
            printf("inserisci un numero");
            scanf("%d", &k);
            if(k-a> k-b){
                printf("\nil secondo numero è piu vicino ");
            }
            else if(k-a == k-b){
                printf("\n i primi 2 numeri inseriti sono uguali al terzo ");
            }
            else{
                printf("\nil primo numero è piu vicino ");
            }
            break;
        case 4:
            if( a%b==0 ){
                printf("\n%d e multiplo di %d ", a, b);

            }
            else if(b%a==0){
                printf("\n%d e multiplo di %d ", b, a);
            }
            else{
                printf("\nnessun numero è multiplo dell'altro");
            }
            break;
        default:
            printf("\nopzione non valida");
            break;
            
    }
    

}