/*INSERIRE UNA SERIE DI VALORI FIN QUANDO LA LORO SOMMA NON SUPERA
200, CALCOLARNE LA MEDIA E IL NUMERO DI VALORI INSERITI.*/
#include <stdio.h>
int main(){
    float a, b,c,d,contatore;
    a=0;
    b=0,
    c=0;
    
    printf("inserisci un numero: ");
    scanf("%f", &c);

    if(c<200){
        printf("\ninserisci un altro numero: ");
        scanf("%f", &b);
        c= c+b;
        if(c<200){
            printf("\ninserisci un altro numero: ");
            scanf("%d", &b);
            c=c+b;
        }
        else{
        printf("\nhai raggiunto la soglia in 2 tentativi");
        }
        if(c<200){
            printf("\ninserisci un altro numero: ");
            scanf("%d", &b);
            c=c+b;
        }
        

        else{
        printf("\nhai raggiunto la soglia in 4 tentativi");
        }
        if(c<200){
            printf("\ninserisci un altro numero: ");
            scanf("%d", &b);
            c=c+b;
        }
        if(a<200){
            printf("\ntentativi esauriti");
        }



    }
    else{
    printf("\nhai gia raggiunto la soglia");
    }
    return 0;
}