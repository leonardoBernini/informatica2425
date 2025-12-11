/* registrare le informazione di alcuni libri
    titolo, autore, anno creazione.
    arrey di libri
    1)caricare l'arrey 
    2)pubblicare
    3)rimuovere un libro
    4) cercare un libro in base al titolo
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char titolo[20];
    char autore[20];
    char anno[10];
    
     
}libro;
int  menu(){
    int scelta;
    printf("1)inserisci il libro\n");
    scanf("%d",&scelta);
    return scelta;
}
libro* aggiungi_libro(int n, libro *libreria){
    int c;
    libreria=(libro*)realloc(libreria,n*sizeof(libro));
    printf("inserisci il titolo del libro:\n");
    fgets(libreria,20,stdin);
    getchar();
    printf("inserisci l'autore del libro:\n");
    fgets(libreria,20,stdin);
    getchar();
    printf("inserisci l'anno di creazione:\n");
    fgets(libreria,20,stdin);
    getchar();
    return libreria;
    
}
int main(){
    libro* libreria= NULL;
    int n=0;
    int scelta;

    do{
        scelta= menu();
        switch(scelta){
            case 1:
                n++;
                aggiungi_libro(n,libreria);
                break;
        }

    }while(scelta!=6);
    

    free(libreria);

}