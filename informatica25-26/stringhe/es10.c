/*stringa in stringa*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef char* stringa;
int  in_string(stringa s1,stringa s2){
    int dim1=strlen(s1);
    int dim2=strlen(s2);
    int flag=0;
    int cnt=0;
    for(int i=0; i<dim1-dim2+1;i++){
        if(s1[i]==s2[0]){
            flag=1;
            for(int j=1;j<dim2;j++){
                if(s1[i+j]!=s2[j]){
                    flag=0;
                    break;
                }
            }
        }
        cnt+=flag;
    }
    return flag;
}