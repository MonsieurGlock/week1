#include <stdio.h>
int main(){
    int term,i=0, a[3]={1,1,0};
    scanf("%d",&term);
    while ( i != term )
    {
        printf("%d ",a[0]);
        a[2] = a[0]+a[1];
        a[1] = a[0];
        a[0] = a[2];
        i++;
    }
    return 0;
}