/**/
#include <stdio.h>
#include <math.h>
int delta(int a, int b, int c);
int main(){
    int a,b,c,del;
    int x1=0,x2=0;
    printf("inserisci a, b e c: ");
    scanf("%d%d%d",&a,&b,&c);
    del=delta(a,b,c);
    printf("il delta è %d\n",del);
    
}
int delta(int a, int b, int c){

    int somma=0;
    
    somma-=4*a*c;
    if(b<0){
        b=b*-1;
    }
    somma=b*b+somma;
    return somma;
    
}
