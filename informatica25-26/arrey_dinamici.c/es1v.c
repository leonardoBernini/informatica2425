/*Scrivere un programma in C che gestisca un insieme di numeri interi usando un array dinamico.
Il programma deve permettere, tramite menù:
    1. Aggiungere un numero (espandendo l’array con realloc)
    2. Visualizzare tutti i numeri
    3. Cercare un numero specifico
    4. Ordinare i numeri in ordine crescente
    5. Eliminare un numero scelto
    6. Uscire*/
#include <stdio.h> 
#include <stdlib.h>
int menu(){
    int scelta;
    printf("1. Aggiungere un numero (espandendo l’array con realloc)\n");
    printf("2. Visualizzare tutti i numeri\n");
    printf("3. Cercare un numero specifico\n");
    printf("4. Ordinare i numeri in ordine crescente\n");
    printf("5. Eliminare un numero scelto\n");
    printf("6. Uscire\n");
    scanf("%d", &scelta);
    return scelta;
}
int* espandi_arrey(int *vett, int *dim){
    (*dim)++;
    int num;
    vett=(int*)realloc(vett,(*dim)*sizeof(int));
    if(vett==NULL){
        exit(1);
    }
    printf("quale elemento vuoi inserire: ");
    scanf("%d",&num);
    vett[*dim-1]=num;
    

    return vett;
}
void stampa_array(int *vett, int dim){
    for(int i=0; i<dim; i++){
        printf("%d\t",vett[i]);
    }printf("\n");
}
void ricerca_sequenziale(int *vett, int dim){
    int n;
    printf("\nquale valore vuoi cercare: \n");
    scanf("%d",&n);
    for(int i=0; i<dim;i++){
        if(vett[i]==n)
            printf("il valore %d si trova in posizione %d\n",n,i);
    }
}
void bubble_sort(int *vett, int dim){
    int temp;
    for (int i = 0; i < dim - 1; i++){
        for (int j = 0; j < dim - i - 1; j++){
            if (vett[j] > vett[j + 1]){
                temp = vett[j];
                vett[j] = vett[j + 1];
                vett[j + 1] = temp;
            }
        }
    }
    printf("Array ordinato.\n");
}
int* elimina_valore(int *vett, int *dim){
    int p, n;
    p=0;
    printf("\n quale carattere vuoi eliminare: ");
    scanf("%d",&n);
    for(int i=0; i<(*dim);i++){
        if(vett[i]== n){
            for(int j=i;j<(*dim)-1;j++){
                vett[j]=vett[j+1];
                p++;
            }
            (*dim)--;
            i--;
        }
    }
    vett=(int*)realloc(vett,(*dim)*sizeof(int));
    if(vett==NULL){
        exit(1) ;
    }
    return vett;
}
int main(){
    int *vett= NULL;
    int dim=0;
    int scelta;

    do{
        scelta= menu();
        switch(scelta){
            case 1:
                vett= espandi_arrey(vett,&dim);
                
                break;
            case 2:
                stampa_array(vett,dim);
                break;
            case 3: 
                ricerca_sequenziale(vett, dim);
                break;
            case 4:
                bubble_sort(vett,dim);
                break;
            case 5:
                vett=elimina_valore(vett,&dim);
                break;
            case 6:
                printf("uscita");
                break;

            default:
                printf("scelta non valida:\n");
                break;

        


        }

    }while(scelta!=6);
    
    free(vett);
    
}