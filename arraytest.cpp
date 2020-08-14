#include <stdio.h>
int main(){
    int n,i;
    printf("How many number : ");
    scanf("%d",&n);
    int num[n];
    for(i=0 ; i < n ; i++){
        printf("Entter %d number :",i+1);
        scanf("%d",&num[i]);
    }
    for(i=0 ; i < n ; i++){
        printf("%d number is %d \n",i+1,num[i]);
    }
    return 0;
}