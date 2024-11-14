/* leggere una sequenzadi numeri, visualizarla e determinare quanti numeri sono stati inseriti.
si termina non appena arriva uno 0
*/
#include <stdio.h>

int main(){
    int numero,cnt=1;
    
    printf("inserire un numero: ");
    scanf("%d", &numero);
    while(numero!=0){
        printf("il valore inserito è: %d ", numero);
        printf("\ninserire un numero: ");
        scanf("%d", &numero);
        cnt++;
    }
    printf("hai inserito %d valori", cnt);
}