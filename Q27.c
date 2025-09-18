#include <stdio.h>
int main(){
    int sum,n;
    sum=0;
    printf("enter the number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i+=2)
    {sum+=i;
        printf("%d\n",i);

    }printf("%d\n",sum);
    return 0;
}