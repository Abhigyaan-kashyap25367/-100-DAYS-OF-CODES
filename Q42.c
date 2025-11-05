#include <stdio.h>
int main(){
    int n,product,same ;
    printf("enter the number ");
    scanf("%d",&n);
    same =n;
    int sum=0;
    for(int i=1;i<=n-1;i++){
        product=n%i;
    if(product==0){
    printf("%d ",i);
    sum+=i;
    }
    }if (same==sum){
        printf("PERFECT NUMBER =%d\n",sum);

    }else{
        printf("NOT PERFECT NUMBER =%d\n",sum);
    }
    return 0;
}