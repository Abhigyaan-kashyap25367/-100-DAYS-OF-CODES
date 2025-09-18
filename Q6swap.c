#include <stdio.h>
int main(){
    int a,b,c;
    printf ("Before Swap \n");
    printf("Enter the number ");
    scanf("%d",&a);
    printf("Enter another number ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("After swap \n");
    printf("Swap value %d\n",a);
    printf("swap value %d\n",b);

    return 0;
}