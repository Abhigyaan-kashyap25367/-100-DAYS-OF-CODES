#include <stdio.h>
int main(){
    /*
    Sum of first n number of terms.
    Sum = (n/2)*(2*a+(n-1)*d)
    a=1 ,d=1
     */ 
    int n;
    printf("enter number of terms (n): ");
    scanf("%d",&n);
    printf("Sum of n number of terms is : %d ",(n*(n+1))/2);
    return 0;
}