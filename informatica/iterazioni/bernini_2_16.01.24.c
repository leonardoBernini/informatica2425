/*Richiesti due numeri da tastiera verifica e comunica se sono numeri Amici/Amicali.
Definizione di numeri Amicali: due numeri si dicono amicali se la somma dei divisori del primo
numero è uguale al secondo numero e viceversa.*/
#include <stdio.h>
int main(){
    int n, divisore=1, sum1=0,n2,sum2;

    printf("inserisi un numero\n");
    scanf("%d",&n);

        
    while(divisore<=n){
            
        if(n%divisore==0){
            
            sum1+=divisore;
            divisore++;

        }
        else{
                
            divisore++;
        }

    }
    printf("inserisi un numero\n");
    scanf("%d",&n2);
    divisore=1;

        
    while(divisore<=n2){
            
        if(n2%divisore==0){
            
            sum2+=divisore;
            divisore++;

        }
        else{
                
            divisore++;
        }

    }
    if(sum1==n2 && sum2==n ){
        printf("i 2 numeri sono amichali");
    }
}
   


