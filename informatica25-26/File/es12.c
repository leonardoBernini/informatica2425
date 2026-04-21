/*rubrica*/
#include <stdio.h>

typedef struct{
    char nome[30];
    char telefono[15];
}contatto;
void aggiungiContatto(){
    FILE *fp= fopen("prova/rubrica.bin", "ab");
    if(fp==NULL){
        printf("Eroore apertura file\n");
        return ;
    }
    contatto c;
    printf("inserisci il nome: ");
    scanf(" %29[^\n]", c.nome);
    getchar();  
    
    printf("Inserisci il numero: ");  
    scanf(" %14[^\n]", c.telefono);
    fwrite(&c,sizeof(contatto),1,fp);
}
void stampacontatti(){
    FILE *fp= fopen("prova/rubrica.bin", "rb");
    if(fp==NULL){
        printf("Eroore apertura file\n");
        return ;
    }
    contatto c;
    printf("\n---rubrica---\n");
    while(fread(&c, sizeof(contatto), 1, fp) == 1){
        printf("Nome: %s\nTelefono: %s\n", c.nome, c.telefono);
        
    }
    fclose(fp);
}
int main(){
    int scelta;
    do{
        printf("\nmenu rubrica: \n");
        printf("1. aggiungi contatto: \n");
        printf("2.visualizza contatti: \n");
        printf("0.esci\n");
        printf("scelta: ");
        scanf("%d",&scelta);
        getchar();

        switch(scelta){
            case 1:
            aggiungiContatto();
                break;
            case 2:
            stampacontatti();
                break;
            case 0:
                printf("uscita\n");
                break;
            default:
                printf("scelta non valida\n");
                break;
        }

    }while(scelta!=0);
}