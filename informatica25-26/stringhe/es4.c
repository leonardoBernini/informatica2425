/*Completare la seguente funzione iniziata in 
classe: void maiuscole_minuscole(Stringa s1, Bool maiusc_to_minusc)*/
#include <stdio.h>
typedef char* Stringa;
typedef enum { false, true } Bool;
void maiuscole_minuscole(Stringa s1, Bool maiusc_to_minusc){
    int i=0;
    if(maiusc_to_minusc){
        while(s1[i]!='\0'){
            if(s1[i]>='a'&& s1[i]<='z'){
                s1[i]-=32;
            }
            i++;
        }
    }else{
        while(s1[i]!='/0'){
            if(s1[i]>='A'&& s1[i]<='Z'){
                s1[i]+=32;
            }
            i++;
        }

    }
}


