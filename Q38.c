#include <stdio.h>
int main(){
    int n ,r;
    printf("Enter the number : ");
    scanf("%d",&n);
    int sum=0;
    while(n!=0){
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("sum of digits is %d\n",sum);

    return 0;
}