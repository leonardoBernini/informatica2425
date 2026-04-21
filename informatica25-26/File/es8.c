#include <stdio.h>
int main(){
    FILE *fp;
    char frase[100];
    char scelta;
    fp = fopen("prova/righe.txt", "a");
    
    if (fp == NULL) {
        printf("Errore nell'aprire il file.\n");
        return 1;
    }

    do{
        printf("Inserisci una frase: ");
        fgets(frase, sizeof(frase), stdin);
        fputs(frase ,fp);

        printf("Vuoi inserire un'altra frase? (s/n): ");
        scanf("%c", &scelta);
        getchar(); 

    }while (scelta == 's' || scelta == 'S');
    fclose(fp);
    return 0;
}
   