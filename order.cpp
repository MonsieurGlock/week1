#include <stdio.h>
int main(){
    int i,j,m,n;
    printf("How many number : ");
    scanf("%d",&n);
    int num[n];
    for(i=0 ; i < n ; i++){
        printf("Entter %d number :",i+1);
        scanf("%d",&num[i]);
    }
    for(i=0 ; i <= n-2 ; i++ ){
        for(j=0 ; j <= n-i ; j++){
            if(num[j]>num[j+1]){
                m = num[j];
                num[j] = num[j+1];
                num[j+1] = m;
                }
             }    
    }
    for(i=0 ; i <= n-1 ; i++){
        printf("%d ",num[i]);
    }
    return 0;
}