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
    int len=strlen(s);
    Stringa s2=(Stringa)malloc((len+1)*sizeof(char));
    
    if(s2==NULL){
        exit(1);
    }
    strcpy(s2,s);
    
    for(int i=0; i<=len;i++){
        if(s2[i]>='A'&& s2[i]<='Z'){
                s2[i]+=32;
            }
            
        if(s2[i]== ' '|| s2[i]==39){                                                                
            for(int j=i;j<len;j++){
                s2[j]=s2[j+1];
            }
            len--;
            i--;
        }
    }
    s2=(Stringa)realloc(s2,(len+1)*sizeof(char));
    if(s2==NULL){
        exit(1) ;
    }
    return s2;
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

    s1=crea_stringa_dinamica();
    s2=elimina_valore(s1);
   
    if(palindroma(s2)){
        printf("%s è palindroma\n",s1);
    }else{
        printf("%s non è palindroma",s1);
    }

    
    free(s1);
    free(s2);   
}