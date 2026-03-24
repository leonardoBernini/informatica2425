
#include <stdio.h>
#include <stdlib.h>
void  ordina_file(char nome[]){
    FILE *fp;
    int vett[100], i,tmp;
    int n=0;

    fp = fopen(nome, "r");
    if(fp==NULL){
        printf("errore ");
        exit(1);
    }
    while(fscanf(fp,"%d",&vett[n])== 1){
        printf("elemento %d: %d\n", n+1,vett[n]);
        n++;
    }
    fclose(fp);
    
    for(i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(vett[i] < vett[j]){
                tmp = vett[i];
                vett[i] = vett[j];
                vett[j]=tmp;
            }
        }
    }
    fp = fopen(nome, "w");
    if(fp==NULL){
        printf("errore ");
        exit(1);
    }
    for(i=0;i<n;i++){
        fprintf(fp,"%d ",vett[i]);
    }
    fclose(fp);
}
int main(){
    char nome[20];

    printf("inserisci il nome del file\n");
    scanf("%s",nome);

    ordina_file(nome);
}