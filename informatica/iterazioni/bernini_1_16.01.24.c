/*Calcolare quanti e quali numeri primi sono presenti in un ampio intervallo di valori.
Definizione di numero primo: un numero 
si dice primo se è divisibile solo per 1 e per se stesso.*/

#include <stdio.h>
int main(){
    int n, divisore=1, flag=0;



   for(int i=0; i<8;i++){
        printf("inserisi un numero\n");
        scanf("%d",&n);
        flag==0;
        divisore=1;
        
            
        while(divisore<=n){
            
                
            if(n%divisore==0){
                    
                divisore++;
                flag++;
            }
            else{
                    
                divisore++;
            }

        }
    
    
    
    if(flag==2 && n!=2 && n!=-2 ){
            printf("%d è un numero primo\n", n);
    }
    
    

   }
   return 0;
}
   
  


