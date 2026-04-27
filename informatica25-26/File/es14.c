/* Creare una rubrica telefonica utilizzando un file binario
    aggiungere o creare il file rubrica
    stampa la lista contatti 
    elimina un contatto in base al nome
    separa il file in due file in base al sesso
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[30];
    char telefono[15];
    char sesso;
} Contatto;

void aggiungiContatto() {
    FILE *fp = fopen("rubrica.dat", "ab"); // append in binario
    if (fp == NULL) {
        printf("Errore apertura file!\n");
        return;
    }

    Contatto c;
    printf("Inserisci nome: ");
    scanf(" %[^\n]", c.nome);
    getchar();
    printf("Inserisci telefono: ");
    scanf(" %[^\n]", c.telefono);
    getchar();
    printf("Inserisci il sesso: ");
    scanf(" %c", &c.sesso);
    getchar();
    fwrite(&c, sizeof(Contatto), 1, fp);
    fclose(fp);

    printf("Contatto aggiunto!\n");
}

void visualizzaRubrica() {
    FILE *fp = fopen("rubrica.dat", "rb"); // lettura binaria
    if (fp == NULL) {
        printf("Rubrica vuota!\n");
        return;
    }

    Contatto c;
    printf("\n--- Rubrica ---\n");
    while (fread(&c, sizeof(Contatto), 1, fp) == 1) {
        printf("Nome: %s, Telefono: %s, sesso:%c\n", c.nome, c.telefono, c.sesso);
    }
    fclose(fp);
    printf("---------------\n");
}
void eliminacontatto(){
    FILE *fp = fopen("rubrica.dat", "rb");
    FILE *fptmp = fopen("temp.dat", "wb");
    char cerca[30];
    Contatto c;
    
    if (fp == NULL) {
        printf("Rubrica vuota!\n");
        return;
    }
    if (fptmp == NULL) {
        printf("Rubrica vuota!\n");
        return;
    }

    printf("inserisci il nome\n");
    scanf(" %[^\n]", cerca);

    while(fread(&c,sizeof(Contatto),1,fp)){
        if(strcmp(c.nome, cerca)==0){
            printf("trovato!");

        }else{
            fwrite(&c,sizeof(Contatto),1,fptmp);
        }

    }
    fclose(fp);
    fclose(fptmp);
    FILE *fpm = fopen("rubrica.dat", "wb");
    FILE *fptmpm = fopen("temp.dat", "rb");
    if (fpm == NULL) {
        printf("Rubrica vuota!\n");
        return;
    }
    if (fptmpm == NULL) {
        printf("Rubrica vuota!\n");
        return;
    }
    while(fread(&c,sizeof(Contatto),1,fptmpm)){
        fwrite(&c,sizeof(Contatto),1,fpm);
    }
    fclose(fpm);
    fclose(fptmpm);
    

}
void separacontatti(){
    
    FILE *fp = fopen("rubrica.dat", "rb");
    FILE *fpf = fopen("femmine.dat", "ab");
    FILE *fpm = fopen("maschi.dat", "ab");
    Contatto c;
    if (fp == NULL) {
        printf("errore!\n");
        return;
    }
    if (fpf == NULL) {
        printf("errore!\n");
        return;
    }
    if (fpm == NULL) {
        printf("errore!\n");
        return;
    }
    while(fread(&c,sizeof(Contatto),1,fp)){
        if(c.sesso=='f' || c.sesso=='F'){
           fwrite(&c,sizeof(Contatto),1,fpf);

        }else{
            fwrite(&c,sizeof(Contatto),1,fpm);
        }

    }
    fclose(fp);
    fclose(fpf);
    fclose(fpm);

    
    FILE *fpfm = fopen("femmine.dat", "rb");
    FILE *fpmm = fopen("maschi.dat", "rb");
    printf("\n----rubrica femminie----\n");
    while (fread(&c,sizeof(Contatto),1,fpfm))
    {
        printf("Nome: %s, Telefono: %s, sesso:%c\n", c.nome, c.telefono, c.sesso);
    }
    printf("\n----rubrica maschi----\n");
    while (fread(&c,sizeof(Contatto),1,fpmm))
    {
        printf("Nome: %s, Telefono: %s, sesso:%c\n", c.nome, c.telefono, c.sesso);
    }
    fclose(fpfm);
    fclose(fpmm);
    
   

}

int main() {
    int scelta;

    do {
        printf("\nMenu Rubrica:\n");
        printf("1. Aggiungi contatto\n");
        printf("2. Visualizza rubrica\n");
        printf("3. elimina contatto\n");
        printf("4. separa i contatti\n");
        printf("0. Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);
        getchar();

        switch(scelta) {
            case 1:
                aggiungiContatto();
                break;
            case 2:
                visualizzaRubrica();
                break;
            case 3:
                eliminacontatto();
                break;
            case 4:
                separacontatti();
                break;
            case 0:
                printf("Uscita dal programma.\n");
                break;
            default:
                printf("Scelta non valida!\n");
        }
    } while(scelta != 0);

    return 0;
}