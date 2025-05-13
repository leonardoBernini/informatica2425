/*MERCOLEDI' 7/5/2025 CARICATO FILE CON CORREZIONE DI TUTTI GLI ESERCIZI


ULTERIORI ESERCITAZIONI
1) DATO UN ARRAY CALCOLARE QUANTI VALORI PARI E QUANTI VALORI DISPARI;
2) DATO UN ARRAY ESEGUIRE LA MEDIA DEI SUOI VALORI;
3) DATO UN ARRAY CALCOLARE LA SOMMA DI TUTTI I VALORI POSITIVI E DI TUTTI I VALORI NEGATIVI;
4) DATO UN ARRAY SOSTITUIRE TUTTI GLI 0 CON IL VALORE MINIMO.*/
#include <stdio.h>
#define DIM 4
int menu(int scelta);
void calcolapd(int v[], int dim);
void media(int v[],int dim);
void riempivettore(int v[],int dim);
void sommapos(int v[],int dim);
void noMore_0(int v[],int dim);
void stampaarrey(int v[],int dim);
int main(){
    int v[DIM];
    int scelta;
    int flag=0;
    
    riempivettore(v,DIM);
   
    while(flag==0){
        scelta=menu(scelta);
        switch (scelta){
            
            case 1:
                calcolapd(v,DIM);
                break;
            case 2:
                media(v,DIM);
                break;
            case 3:
                sommapos(v,DIM);
                break;
            case 4:
                noMore_0(v,DIM);
                break;
            case 5:
                stampaarrey(v, DIM);
                break;
            case 6:
                flag==1;
                break;
            default:
                break;
        }
        scelta=0;
    }


}
int menu(int scelta){
   while(scelta >5 || scelta <1){
        printf("scegli la funzione desiderata\n");
        printf("1) DATO UN ARRAY CALCOLARE QUANTI VALORI PARI E QUANTI VALORI DISPARI\n");
        printf("2) DATO UN ARRAY ESEGUIRE LA MEDIA DEI SUOI VALORI\n");
        printf("3) DATO UN ARRAY CALCOLARE LA SOMMA DI TUTTI I VALORI POSITIVI E DI TUTTI I VALORI NEGATIVI\n");
        printf("4) DATO UN ARRAY SOSTITUIRE TUTTI GLI 0 CON IL VALORE MINIMO\n");
        printf("5)stampa l'arrey\n");
        scanf("%d",&scelta);
   }
   return scelta;
}
void riempivettore(int v[],int dim){
    for(int i=0;i<dim;i++){
        printf("inserisci il %d del vettore\n",i+1);
        scanf("%d",&v[i]);

    }
}
void calcolapd(int v[], int dim){
    int pari=0;
    int dispari=0;
    for(int i=0;i<dim;i++){
        if(v[i]%2==0){
            pari++;
        }
        else{
            dispari++;
        }
    }
    printf("i valori pari sono %d e quelli dispari %d",pari,dispari);
}
void media(int v[],int dim){
    int media=0;
    for(int i=0;i<dim;i++){
        media+=v[i];
    }
    printf("la media è %d",media/dim);
}
void sommapos(int v[],int dim){
    int sommap=0;
    int somman=0;
    for(int i=0;i<dim;i++){
        if(v[i]>0){
            sommap+=v[i];
        }
        else{
            somman+=v[i];
        }
    }
    printf("la somma degli elementi positivi è %d\n",sommap);
    printf("la somma degli elementi nrgativi è %d\n",somman);
}
void noMore_0(int v[],int dim){
    int min=v[0];
    for(int i=1;i<dim;i++){
        if(min>v[i]){
            min=v[i];
        }
    }
    for(int i=0;i<dim;i++){
        if(v[i]==0){
            v[i]=min;
        }
    }
}
void stampaarrey(int v[],int dim){
    for(int i=0;i<dim;i++){
        printf("%d\t",v[i]);
        
    }
    printf("\b\n");
}