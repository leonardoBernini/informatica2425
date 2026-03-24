#include <stdio.h>

int main(){
    FILE *file=fopen("prova/dati.txt","w");

    if (file==NULL){
        printf("errore apertura file");
        return 1;
    }
    fprintf(file, "ciao mondo!\n");
    fprintf(file,"il numero: %d", 10);

    fclose(file);
    return 0;
}