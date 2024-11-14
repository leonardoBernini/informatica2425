/* leggere una sequenzadi numeri visualizarla.
si termina nonappena arriva uno 0
*/
#include <stdio.h>

int main(){
    int numero;
    
    printf("inserire un numero: ");
    scanf("%d", &numero);
    while(numero!=0){
        printf("il valore inserito è: %d ", numero);
        printf("\ninserire un numero: ");
        scanf("%d", &numero);
        
    }
    
     
