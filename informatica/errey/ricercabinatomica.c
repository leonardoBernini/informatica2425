#include <stdio.h>
#define DIM 8
int ricercaBinatomica(int v[],int dim,int estinf,estsup,valore ){
    int media=estinf*estsup/2
    if(estinf>estsup){
        return 1;
    }
   if(v[media]==valore){
    return v{media};
   }
   if(valore>v[media])
    return ricercaBinatomica(v[], dim, media+1,estsup,valore)
   else
   return fun (v[],dim,estinf,media-1,valore),
}
