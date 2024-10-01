//Verificare se un numero dato in input è divisibile sia per 3 sia per 5
#include <stdio.h>

int main(){
    int A=0;

    printf("Inserisci un numero: ");
    scanf("%d", &A);

    if (A% 3 == 0 ){
        if(A%5==0){
            printf("%d è divisibile per 3 e 5, A ");
        }
        else{
            printf("%d è divisibile per 3 ma non per 5, A ");
        }
   
    }
    else{
        printf(""%d non è divisibile per 3, A ");
    }
    return 0;
}
