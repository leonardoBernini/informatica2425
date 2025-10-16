/* stringhe con malloc*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
    

    printf("hai inserito : %s",buffer);

    free(buffer);
    return 0;   
}