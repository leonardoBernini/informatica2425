/*stampa i primi n numeri dispari
 successivi al numero a*/
#include <stdio.h>
int main(){
    int n=0;
    int a=0;

    do{
        printf("inserisci un valore:\n");
        scanf("%d",&a);
    }while(a<=0);
    
    do{
        printf("inserisci un quante numeri dispari sussessi vuoi vedere:\n");
        scanf("%d",&n);
    }while(n<=0);
    
    for(int i=0; i<n;i++){
        if(a%2==0){
            a++;
            i++;
            printf("%d ",a);
        }
        a+=2;
        printf("%d ",a);


    }
}
