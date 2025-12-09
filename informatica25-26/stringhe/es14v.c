/*data una stringa scriverla all'inverso*/
#include <stdio.h>
#include <string.h>
void invertistringa(char* str){
    int lun=strlen(str)-1;
    for(int i=0;i<lun/2;i++){
        char k=str[i];
        str[i]=str[lun-i];
        str[lun-i]=k;
    }
    
}

int main(){
    char stringa[30];
    int c;
    printf("inserisci una stringa: ");
    fgets(stringa,30,stdin);
    //while(c=getchar() != '\n' && c != EOF);
    invertistringa(stringa);
    printf("la stringa invertita è: %s",stringa);
}