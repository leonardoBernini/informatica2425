/*fare un programma con un menu in cui chiediamo di rimpire un vettore con numewri pari e usare il 
buble sort*/
#include <stdio.h>
#define DIM 4
void riempivet(int v[],int dim);
void stampavet(int v[],int dim);
void bubbleSort(int vett[], int dim);
void scambiominmax(int v[],int dim);
int menu(int scelta);
int main(){
    int v[DIM];
    int scelta;
    do{
        scelta=menu(scelta);
        switch (scelta){
            case 1:
                riempivet( v, DIM);
                break;
            case 2:
                stampavet( v, DIM);
                break;
            case 3:
                bubbleSort(v,DIM);
                
                break;
                case 4:
                scambiominmax(v,DIM);
                
                break;
            default:
                break;
            }
    }while(scelta!=5);
    

}
int menu(int scelta){
    printf("PREMI\n");
    printf("1.riempi il vetore\n");
    printf("2.stampa il il vetore\n");
    printf("3.ordina tramite bubblesort\n");
    printf("4.trovato il valore minimo e il valore massimo all'interno dell'arrey scambiare le pos");
    printf("5.esci da programma\n");
    scanf("%d",&scelta);
    return scelta;

}
void riempivet(int v[],int dim){
    for(int i=0;i<dim;i++){
        printf("inserisci un valore:\n");
        scanf("%d",&v[i]);
    }
    printf("\n");
}
void stampavet(int v[],int dim){
    for(int i=0;i<dim;i++){
        printf("%d-",v[i]);
    }
}
void bubbleSort(int vett[], int dim){
    int temp;
    int flag=0;
    int i=0;
    while(flag==0){
        flag=1;
        for(int j=0; j<dim-1-i; j++){
            if(vett[j]>vett[j+1]){
                flag=0;
                temp=vett[j];
                vett[j]=vett[j+1];
                vett[j+1]=temp;
            }
        }
        i++;
    }
}
void scambiominmax(int v[],int dim){
    int min, max, temp,imin,imax;
    min=v[0];
    max=v[0];
    for(int i=1;i<dim;i++){
        if(v[i]>max){
            max==v[i];
            imax=i;
        }
        else if(v[i]<min){
            min==v[i];
            imin=i;
        }
    }
    v[imin]=max;
    v[imax]=min;
}
