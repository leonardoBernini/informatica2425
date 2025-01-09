/*es pag 223 n17: 
 scrivi un programma che richiede i primi 3 numeri perfetti 
 e li visualizza sullo scermo
 es n-6 div 1,2,3 somma 1+2+3
 6-28-496*/
 #include <stdio.h>
 int main(){
    int div=0;
    int d=1;
    int somma=0;

    for(int i=1; div<3; i++){ 
        while(d<=i/2){
            if(i%d==0 ){
                somma+=d;
            }
            d++;
        }
        if(somma==i){
            printf("%d\n",somma);
            div++;
        }
        somma=0;
        d=1;
        
    }
 }