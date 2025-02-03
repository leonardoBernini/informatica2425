/*Il programma letti tre numeri, determini se possono essere 
considerati in progressione aritmetica; una progressione aritmetica
 è una serie di numeri in cui la differenza tra due numeri 
 successivi è costante.
*/
#include <stdio.h>

int main() {
    int num1, num2, num3,dif1,dif2;
    

   
    printf("Inserisci tre numeri : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    
    dif1 = num2 - num1;
    dif2 = num3 - num2;

    if (dif1 == dif2) {
        printf("I numeri  formano una progressione aritmetica con differenza %d.\n", dif1);
    } else {
        printf("I numeri non formano una progressione aritmetica.");
    }

    return 0;
}