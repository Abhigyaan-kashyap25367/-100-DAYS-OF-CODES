#include<stdio.h>
int main(){
    // l and b are length and breadth of rectangle.
    int l;
    int b;
    printf("enter length  ");
    scanf("%d",&l);
    printf("enter breadth ");
    scanf("%d",&b);
    printf("Perimeter of rectangle is %d\n", 2*(l+b));
    printf("Area of rectangle is  %d\n",l*b );
    return 0;
}