/*Il programma legge tre numeri e dice se possono essere
 le lunghezze dei lati di un triangolo
 (perché un triangolo possa essere tale la somma di ogn
 i coppia lati deve essere maggiore dell’altro */
 #include <stdio.h>
int main(){ 
    float l1, l2, l3;     

    printf("inserisci i lati");
    scanf("%f%f%f", &l1, &l2, &l3);

    if(l1+l2>l3){
        if(l1+l3>l2){
            if(l2+l3>l1){
                printf(" è un triangolo");
            }
            else
                printf(" non è un tiangolo");
        }
        else
            printf(" non è un tiangolo");
    }
    else
        printf(" non è un tiangolo");
        
    

    

}  