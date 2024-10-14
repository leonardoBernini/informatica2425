//DATE DUE DATE ESPRESSE IN g, m, a DETERMINARE LA DATA PIU' RECENTE
#include <stdio.h>

int main(){
    int giorno, mese, anno, data1, data2, bisestile, giorno1, mese1, anno1;
    
    printf("inserisci la prima data"); 
    scanf("%d%d%d", &giorno, &mese, &anno);

      if(anno%100==0){
        if (anno%400==0){
            printf("L'anno è bisestile");
            bisestile=1;
        }
    }
    else{
        if (anno%4==0){
            printf("L'anno è bisestile");
            bisestile=1;
        }
    }
    //controllo del mese e del giorno
    if (mese>=1 && mese <=12){
        if (mese==2){
            if(giorno>=1 && giorno<=28+bisestile){
                printf("\nLa data è accettabile");
            }
            else{
                printf("\nLa data non è accettabile");
            }
        }
        else{
            if( mese==11 || mese==4 || mese==6 || mese==9){
                if (giorno>=1 && giorno<=30){
                    printf("\nLa data è accettabile");
                }
                else{
                    printf("\nLa data non è accettabile");
                }
            }
            else{
                if (giorno>=1 && giorno<=31){
                    printf("\nLa data è accettabile");
                }
                else{
                    printf("\nLa data non è accettabile");
                }
            }
        }
    }
    else{
        printf("\nLa data non è accettabile");
    }


   
   
    printf("inserisci la seconda data");
    scanf("%d%d%d", &giorno1, &mese1, &anno1);

      if(anno1%100==0){
        if (anno1%400==0){
            printf("L'anno è bisestile");
            bisestile=1;
        }
    }
    else{
        if (anno1%4==0){
            printf("L'anno è bisestile");
            bisestile=1;
        }
    }
    //controllo del mese e del giorno
    if (mese1>=1 && mese1 <=12){
        if (mese1==2){
            if(giorno1>=1 && giorno<=28+bisestile){
                printf("\nLa data è accettabile");
            }
            else{
                printf("\nLa data non è accettabile");
            }
        }
        else{
            if( mese1==11 || mese1==4 || mese1==6 || mese1==9){
                if (giorno1>=1 && giorno1<=30){
                    printf("\nLa data è accettabile");
                }
                else{
                    printf("\nLa data non è accettabile");
                }
            }
            else{
                if (giorno1>=1 && giorno1<=31){
                    printf("\nLa data è accettabile");
                }
                else{
                    printf("\nLa data non è accettabile");
                }
            }
        }
    }
    else{
        printf("\nLa data non è accettabile");
    }


    if(anno>anno1){
        printf("la prima data è piu recente ");
    }
    else{
        if(anno1>anno){
            printf("la seconda data è piu recente");
    
        }
        else{
            if(mese>mese1){
                printf("la prima data è piu recente ");
            }
            else{
                if(mese1>mese){
                    printf("la seconda data è piu recente "); 
                }
            }
                 else{
                    if(giorno>giorno1){
                        printf("la prima data è piu recente ");
                    }
                    else{
                        if(giorno1>giorno){
                        printf("la seconda data è piu recente ");
                        }
                    }
                         else{
                            printf("le date sono uguali");
                         }
                    }
                }
            }   

        }
    }
}    


        


