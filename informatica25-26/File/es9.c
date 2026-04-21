/*Scrivere un programma che inverta ogni riga contenuta 
nel file righe.txt e riporti il risultato sullo scherzo. 
Per esempio la riga "PROVA DI STAMPA"  diventa 
"APMATS ID AVORP"*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *file=fopen("prova/righe.txt","w");
    
    if (file==NULL){
        printf("errore apertura file");
        return 1;
    }
    


    fclose(file);
    return 0;
}