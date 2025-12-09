#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef char* Stringa;
int sottostringa(Stringa s1, Stringa s2){
    int dim1 = strlen(s1);
    int dim2 = strlen(s2);
    int flag = 0;
    int cnt = 0;

    for(int i = 0; i <= dim1-dim2+1; i++){
        if(s1[i] == s2[0]){
            flag = 1;
            for(int j = 1; j < dim2; j++){
                if(s1[i+j] != s2[j]){
                flag = 0;
                break;
                }
            }
            cnt += flag;
        }
    }
    return cnt;
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
    Stringa s1=crea_stringa_dinamica();
    Stringa s2=crea_stringa_dinamica();

    printf("la stringa compare %d volte in %s",sottostringa(s1,s2),s1);
}