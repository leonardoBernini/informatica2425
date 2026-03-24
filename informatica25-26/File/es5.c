#include <stdio.h>
typedef struct persona
{
    char nome[550];
    char cognome[550];
    int eta;
    
}persona;

int main(){
    FILE *file=fopen("prova/dati2.txt","w");
    
    persona p1[4];
    
    if (file==NULL){
        printf("errore apertura file");
        return 1;
    }
    for(int i=0;i<4;i++){
        printf("inseisci il nome:\n");
        fgets(p1[i].nome,100,stdin);

        printf("inseisci cognome:\n");
        fgets(p1[i].cognome,100,stdin);
        
        printf("inseisci eta:\n");
        scanf("%d", p1->eta);
    }


    fclose(file);
    return 0;
}