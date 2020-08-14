#include <stdio.h>
int main(){
    int num[5] = {8,5,1,7,2},i,j,m;
    for(i=0 ; i <= 5-2 ; i++ ){
        for(j=0 ; j <= 5-i ; j++){
            if(num[j]>num[j+1]){
                m = num[j];
                num[j] = num[j+1];
                num[j+1] = m;
                }
             }    
    }
    for(i=0 ; i <= 5-1 ; i++){
        printf("%d ",num[i]);
    }
    return 0;
}