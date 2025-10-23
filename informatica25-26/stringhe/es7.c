/*parole palindrome*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef char* Stringa;
typedef enum { false, true } Bool;
Stringa crea_stringa_dinamica(){
   Stringa str = NULL;
    int size = 0;       
    int capacity = 0;  
    char c;

    

    while ((c = getchar()) != '\n' && c != EOF) {  
        if (size + 1 >= capacity) {
            capacity += 10; 
            str = (Stringa) realloc(str, capacity * sizeof(char));
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
Stringa elimina_valore(Stringa s){
    int p, n;
    int len=strlen(s);
    Stringa vett;
    strcpy(vett,s);
    p=0;
    
    for(int i=0; i<len;i++){
        if(vett[i]== ' '){                                                                
            for(int j=i;j<len-1;j++){
                vett[j]=vett[j+1];
                p++;
            }
            len--;
            i--;
        }
    }
    vett=(Stringa)realloc(vett,len*sizeof(char));
    if(vett==NULL){
        exit(1) ;
    }
    return vett;
}
Bool palindroma(Stringa s){
    int len;
    len=strlen(s);
    for(int i=0; i<len/2; i++){
        if(s[i]!=s[len-i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    Stringa s1;
    Stringa s2;
    Bool pali;

    s1=crea_stringa_dinamica();
    s2=elimina_valore(s1);
    pali= palindroma(s2);
    if(pali){
        printf("%s è palindroma",s1);
    }

    
    
}
