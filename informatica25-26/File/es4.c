#include <stdio.h>

int main(){
    FILE *file=fopen("prova/dati1.txt","r");
    char nome[100];
    int eta;
    float media;
    if (file==NULL){
        printf("errore apertura file");
        return 1;
    }
    fscanf(file, "%s %d %f", nome, &eta, &media);
    printf("Nome: %s Eta: %d media: %.2f",nome,eta,media);
    fclose(file);
    return 0;
}