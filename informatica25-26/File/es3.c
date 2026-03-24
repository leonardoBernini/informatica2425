#include <stdio.h>

int main(){
    FILE *file=fopen("prova/dati1.txt","w");

    if (file==NULL){
        printf("errore apertura file");
        return 1;
    }
    fprintf(file, "%s %d %.2f","luca",12,6.5);
    fclose(file);
    return 0;
}