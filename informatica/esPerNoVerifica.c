/*Dato un numero stampare tutto i suoi divisori
*/
#include <stdio.h>
int main(){
    int n, divisore=1;

    printf("inserisi un numero\n");
    scanf("%d",&n);

   if(n>0){
        
        while(divisore<=n){
            if(n%divisore==0){
                printf("%d è divisore di %d\n", n, divisore);
                divisore++;
            }
            else{
                
                divisore++;
            }

        }
   }
   if(n<0){
        divisore=divisore*-1;
        while(divisore>=n){
            if(n%divisore==0){
                printf("%d è divisore di %d\n", n, -divisore);
                divisore--;
            }
            else{
                
                divisore--;
            }

        }

   }
   else{
    printf("lo zero non ha divisori");
   }
}