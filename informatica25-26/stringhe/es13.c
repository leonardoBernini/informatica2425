/*cifratura*/
#include <stdio.h>
#include <string.h>
int main(){
    int fattore_cif;
    char string[50];

    printf("inserisci la stringa: ");
    fgets(string,50,stdin);
    printf("inserisci il codice di cifratura: ");
    scanf("%d",&fattore_cif);
    for(int i=0; string[i]!='\n';i++){
        if(string[i]+fattore_cif>122 ||(string[i]<='Z'&& string[i]>='A'&& string[i]+fattore_cif>90) ){
            string[i]-=26;
        }
        string[i]+=fattore_cif;
    }
    printf("la stringa cifrata è: %s",string);
}