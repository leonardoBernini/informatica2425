#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int num_studenti=31;
    printf("Numero casuale: %d\n", rand() % num_studenti+1);
}
//int numeroCasualeInIntervallo = rand() % (max - min + 1) + min;