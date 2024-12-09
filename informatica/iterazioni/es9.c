/*progettare un algoritmo che lagga un numero b<a e
 scriva quante volte a è divisibile per b
 es a= 162 b=3 a è divisibille 4 volte per b*/
 #include <stdio.h>
 int main(){
    int a=0,b=0,q=0,r=0,cnt=0,k=0;
    
        printf("inserisci il primo numero: ");
        scanf("%d",&a);
        printf("inserisci il secondo numero: ");
        scanf("%d",&b);

    if(a<b){
        k=a;
        a=b;
        b=k;
    }
    q=a;
    while(q>b && r!=0){
        if(q%b==0){
            r=q%b;
            cnt++;
            q/=b;
        }
        
        
    
    }printf("il numero e divisibile per %d %d volte ♥☻☺",b,cnt);
    return 0;
 }