/*Scrivi un programma in C che permetta di far scrivere un messaggio 
di lunghezza variabile all'utente.*/
#include <stdio.h>
#include <stdlib.h>
typedef char* stringa;
stringa lung(){
    stringa s=NULL;
    char c;
    int dim=0;
    int capacita;
    while((c=getchar())!='\n'){
        if(dim+1>=capacita){
            capacita+=10;
            s=(stringa)realloc(s,capacita*sizeof(char));
            if(s==NULL){
                exit(1);
            }
            
        }
        s[dim]=c;
        dim++;
    }
    s[dim]='\0';
    return s;
}

int main(){
    stringa s=NULL;
    s=lung(s);
    printf("\nhai inserito: %s",s);
}