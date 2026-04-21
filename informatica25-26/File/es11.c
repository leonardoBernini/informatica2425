#include <stdio.h>

int main(){
    FILE *fp= fopen("prova/numeri.bin", "rb");
    int numeri[3];
    if(fp==NULL){
        printf("Eroore apertura file\n");
        return 1;
    }
    fread(numeri, sizeof(int),3,fp);
    for(int i=0; i<3; i++){
        printf("%d\n",numeri[i]);
    }

    fclose(fp);
}