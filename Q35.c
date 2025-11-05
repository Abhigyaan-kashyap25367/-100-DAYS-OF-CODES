#include <stdio.h>
int main(){
    int n,product ;
    printf("enter the number ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        product=n%i;
    if(product==0)
    printf("%d ",i);
    }
    return 0;
}