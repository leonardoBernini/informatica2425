/*Dato un numero stampare tutto i suoi divisori e scoprire se è un numero primo 
*/
#include <stdio.h>
int main(){
    int n, divisore=1, flag=0;

    printf("inserisi un numero\n");
    scanf("%d",&n);

   if(n>0){
        
        while(divisore<=n){
            
            if(n%divisore==0){
                printf("%d è divisore di %d\n", n, divisore);
                flag++;
            }
            divisore++;
        }
   }
   if(n<0){
        divisore=divisore*-1;
        while(divisore>=n){
            if(n%divisore==0){
                printf("%d è divisore di %d\n", n, -divisore);
                
            }
            divisore--;


        }

   }
   if(n==0){
    printf("lo zero non ha divisori\n");
   }
   if(flag==2 && n!=2 && n!=-2){
        printf("%d è un numero primo", n);
   }
   return 0;
}