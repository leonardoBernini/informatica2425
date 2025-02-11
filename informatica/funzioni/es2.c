/*dato il raggio calcolare la cicorferenza e larea del cerchio */
#include <stdio.h>
#define pigreco 3.14
void calcolaCerchio(float raggio, float *circonferenza, float *area);
int main(){
    float raggio, circonferenza=0, area=0;
    printf("inserisci il raggio: ");
    scanf("%f", &raggio);
    calcolaCerchio(raggio,&circonferenza,&area);
    printf("circonferenza=%f, area=%f",circonferenza,area);
}
void calcolaCerchio(float raggio, float *circonferenza, float *area){
    *circonferenza = 2 * pigreco * raggio;
    *area = pigreco * raggio * raggio;
    
}