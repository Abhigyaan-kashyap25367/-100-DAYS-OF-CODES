#include <stdio.h>
int main(){
    int a,b;
    printf ("Before Swap \n");
    printf("Enter the number ");
    scanf("%d",&a);
    printf("Enter another number ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swap \n");
    printf("Swap value %d\n",a);
    printf("swap value %d\n",b);

    return 0;
}