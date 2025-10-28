/*Scrivi un programma che permetta all'utente di inserire una stringa di 
20 caratteri, un carattere c e che trovi quante volte compare il carattere c
nella stringa.*/
#include <stdio.h>
int main(){
    char string[30];

    printf("come ti chiami: \n");
    scanf("%29[^\n]s",string);
    printf("ciao %s",string);
}