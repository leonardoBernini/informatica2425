/*elimin gli spazzi in una stringa*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef char* string;

       
void compatta(string buffer, int len){
    if(len>0 && buffer[len-1]=='\n'){
        buffer[len-1]='\0';
        len--;
    }
}
string elimina_valore(string vett, int *len){
    int p, n;
    p=0;
    
    for(int i=0; i<(*len);i++){
        if(vett[i]== ' '|| vett[i]==NULL){                                                                
            for(int j=i;j<(*len)-1;j++){
                vett[j]=vett[j+1];
                p++;
            }
            (*len)--;
            i--;
        }
    }
    vett=(string)realloc(vett,(*len)*sizeof(int));
    if(vett==NULL){
        exit(1) ;
    }
    return vett;
}

int main(){
    char *buffer;
    int len;
    
    printf("inserisci la lunghezza della stringa: ");
    scanf("%d",&len);
    getchar();
    buffer= (char *)malloc((len+1)*sizeof(char));
    if(buffer==NULL) return 1;

    printf("insertici la stringha:\n");

    fgets(buffer,len+1, stdin);
    compatta(buffer, len);
    
    elimina_valore(buffer,  &len);
    printf("hai inserito : %s con lunghezza %d",buffer,len);

    free(buffer);
    return 0;   
}
