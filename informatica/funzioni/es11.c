/*sviluppare un programma in c che stampi il triangolo di floyd */
#include <stdio.h>
void floyd(int floyd);
int main(){
    int n=0;
    int floyd=5;
    int cnt;
    int i;
    for(i=0;i<=floyd;i++){
        while(cnt<i){
            n++;
            printf("%d ",n);
            cnt++;
        }
        cnt=0;
        printf("\n");
    }
}
