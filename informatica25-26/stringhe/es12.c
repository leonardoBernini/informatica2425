/*esercizio codice fiscale */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef char* stringa;
stringa crea_stringa_dinamica(){
   stringa str = NULL;
    int size = 0;       
    int capacity = 0;  
    char c;

    while ((c = getchar()) != '\n' && c != EOF) {  
        if (size + 1 >= capacity) {
            capacity += 10; 
            str = (stringa) realloc(str, capacity * sizeof(char));
            if (str == NULL) {
                printf("Errore di allocazione\n");
                exit(1);
            }
        }
        str[size++] = c;
    }
    str[size] = '\0';
    return str;
}
stringa ccc(stringa s, stringa codice,int* pc){
    int cnt=0;
    for(int i=0;s[i]!='\0'&& cnt<3; i++){
        if(s[i]!='a'&& s[i]!='e'&& s[i]!='i'&& s[i]!='o'&& s[i]!='u'){
            codice[cnt]=s[i];
            cnt++;
        }
    }
    for(int i=0;cnt<3;i++){
        if(s[i]=='a'|| s[i]=='e' || s[i]=='i'|| s[i]=='o'|| s[i]=='u'){
            codice[cnt]=s[i];
            cnt++;
        }
    }
    *pc=cnt;

    codice[cnt]='\0';
    return codice;
}
stringa nnn(stringa s, stringa codice, int* pc){
    int cnt=0;
    for(int i=0;s[i]!='\0'&& cnt<3; i++){
        if(s[i]!='a'&& s[i]!='e'&& s[i]!='i'&& s[i]!='o'&& s[i]!='u'){
            codice[cnt+(*pc)]=s[i];
            cnt++;
        }
    }
    for(int i=0;cnt<3;i++){
        if(s[i]=='a'|| s[i]=='e' || s[i]=='i'|| s[i]=='o'|| s[i]=='u'){
            codice[cnt+(*pc)]=s[i];
            cnt++;
        }
    }
    *pc+=cnt;

    codice[cnt]='\0';
    return codice;
}




int main(){
    stringa nome=NULL;
    stringa cnome=NULL;
    stringa codice_fiscale=NULL;
    int* pc;
    codice_fiscale=(stringa)malloc(17*sizeof(char));
    
    
    printf("inserisci il tuo nome:\n");
    nome=crea_stringa_dinamica();
    printf("inserisci il tuo conome:\n");
    cnome=crea_stringa_dinamica();

    codice_fiscale=ccc(cnome, codice_fiscale,&pc);
    codice_fiscale=ccc(nome, codice_fiscale,&pc);
    printf("%s",codice_fiscale);
    

    free(nome);
    free(cnome);
}
