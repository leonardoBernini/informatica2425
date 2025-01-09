/*scrivi un programma che dati imput n numeri interi e un
numero x determini: 
- quanti numeri sono maggiori di x 
-quanti numeri sono minori di x
-quanti numeri sono uguali
*/
#include <stdio.h>
int main(){
    int x=0;
    int n1=0;
    int min=0;
    int ug=0;
    int mag=0;

    printf("inserisci x: ");
    scanf("%d",&x);
    
    for(int i=0; i<10; i++ ){
        printf("inserisci un numero: ");
        scanf("%d",&n1);
        if(n1<x){
            min++;
        }
        else if( n1==x){
            ug++;
        }
        else{
            mag++;
        }
        n1=0;

    }
    printf("sono stati inseriti %d numeri minori di %d\n",min,x);
    printf("sono stati inseriti %d numeri uguali %d\n",ug,x);
    printf("sono stati inseriti %d numeri maggiori di %d",mag,x);
}