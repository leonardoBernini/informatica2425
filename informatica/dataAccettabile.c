//data una data il formato gg mm aaaa
//verificare se la data è accettabile 
#include <stdio.h>
int main(){
	int giorno, mese, anno, bisestile;
	giorno=0;
    mese=0;
    anno=0;
    bisestile=0;
	printf("inserisci il giorno:");
	scanf("%d",  &giorno);
	printf("inserisci il mese: ");
	scanf("%d",  &mese);
	printf("inserisci l'anno: ");
	scanf("%d", &anno);
	
	if(anno%100==0){
        if(anno%400==0){
            printf(" l'anno è bisistile");
            bisestile=1;
        }
    }
    else{
        if (anno%4==0){
        printf("l'anno è bisistile");
        bisestile=1;
        }
    }
    if(mese>=1 && mese<=12){
        if(mese==2){
            if(giorno>=1 && giorno<=28+bisestile){
                printf("la data è accettabile");
            }
        }
        else{
            if(mese==11 || mese=4 || mese=6 || mese=9){
                if(giorno>=1 && giorno<=30){
                    printf("la data è accettabile");
                }
                else{
                     printf("la data non è accettabile");
                }
            }
        }
    }

        
    }
        
 }