/*dopo aver creato un vettore numerico controntare 
la somma dei componenti di indice co
la somma di quelle dispari e dire se la somma maggiore
 è divisibile per
un valore k che deve essere diverso di 0*/
#include <stdio.h>
#define DIM 4
void sommavet(int v[],int dim);

int main(){
    int v[DIM];
    riempiVettore(v,DIM);
    sommavet(v,DIM);
}
void sommavet(int v[],int dim){
    int sommap=0;
    int sommad=0; 
    for(int i=0;i<dim;i++){
        if(v[i+1]%2==0){
            sommad+=v[i];
        }
        else{
            sommap+=v[i];
        }
    }
    
}