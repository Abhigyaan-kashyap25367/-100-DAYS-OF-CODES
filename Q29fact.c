#include <stdio.h>
int main(){
    int long fact=1,n;
    printf("Enter the number :");
    scanf("%ld",&n);
    for(int i =1;i<=n;i++)
    {fact =fact*i;
        
    }printf("%ld\n",fact);
    return 0;
}