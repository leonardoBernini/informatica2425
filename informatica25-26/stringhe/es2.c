/* stringhe con malloc*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char *buffer;
    int len;
    
    printf("inserisci la lunghezza della stringa: ");
    scanf("%d",&len);
    buffer= (char *)malloc((len+1)*sizeof(char));
    if(buffer==NULL) return 1;

    printf("insertici la stringha:\n");
    if(fgets(buffer,(len+1), stdin)!=NULL){
        printf("hai inserito: %s",buffer);
    }

    printf("hai inserito : %s",buffer);
    

}