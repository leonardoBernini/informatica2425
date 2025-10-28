/*usa stringh.h per le segunti funzioni
1)calcola lunghezza stringa
2)controlla se le stringhe sono uguali
3)cercare un carattere e calclolare la frequenza
4)concatena 2 stringhe
5)copiare una stringa
6)ricerca di una stringa all'altra*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef char stringa;
int conta_occorrenze(char* s1, char carattere){
    int dim = 0;
    int cnt_carattere = 0;
    while(s1[dim] != '\0'){
        if(s1[dim] == carattere)
            cnt_carattere++;
        dim++;
    }
    return cnt_carattere;

}

int main(){
    stringa s1 [100]="mondociao";
    stringa s2[100]="ciao";
    char* s3=(char*)malloc(50*sizeof(char));
    char *result;
    

    printf("la prima stringa è lunga %zu caratteri invece la seconda è lunga %zu carateri\n",strlen(s1),strlen(s2));
    if(strcmp(s1,s2)==0){
        printf("le stringhe sono uguali\n");
    }else{
         printf("le stringhe non sono  uguali\n");
    }
    strcpy(s3,s2);
    printf("il carattere compare %d volte\n",conta_occorrenze(s3, 'o'));
    
    if(strstr(s1,s2)!=NULL){
        printf("la stringa'%s' è contenuta in'%s'\n",s2,s1);
    }else{
        printf("la stringa'%s' non è contenuta in '%s' \n",s2,s1);
    }
    

    printf("la concatenizazione è questa= %s",strcat(s1,s2));

}