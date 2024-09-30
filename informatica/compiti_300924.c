//Verificare se un numero dato in input è divisibile sia per 3 sia per 5
#include <stdio.h>

int main(){
    int A=0;

    printf("Inserisci un numero: ");
    scanf("%d", &A);

    if (A% 3 == 0 && A% 5 == 0){

    printf("%d è divisibile sia per 3 che per 5", A);
    } 
    else{
    printf("%d non è divisibile sia per 3 che per 5", A);
    }
    
}
