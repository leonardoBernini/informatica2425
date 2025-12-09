/*data una stringa scriverla all'inverso*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void invertiStringa(char Stringa[],int lun){
    char k;
    for(int i=0; i<lun/2;i++){
        k=Stringa[i];
        Stringa[i]=Stringa[lun-1-i];
        Stringa[lun-1-i]=k;
        
    }
    
}
char* crea_stringa_dinamica(){
    char* str = NULL;
    int size = 0;
    int capacity = 0;
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {
        if (size + 1 >= capacity) {
            capacity += 10;
            str = realloc(str, capacity * sizeof(char));
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

int main(){
    char* Stringa=NULL;
    int lung;
    Stringa=crea_stringa_dinamica();
    lung=strlen(Stringa);
    invertiStringa(Stringa,lung);
    printf("la stringa invertita è: %s",Stringa);
    free(Stringa);
}