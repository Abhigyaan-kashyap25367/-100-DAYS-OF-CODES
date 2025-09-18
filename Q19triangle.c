#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the 1st side of triangle : ");
    scanf("%d",&a);
    printf("Enter the 2nd side of triangle : ");
    scanf("%d",&b);
    printf("Enter the 3rd side of triangle : ");
    scanf("%d",&c);
    if (a+b>c || b+c>a || a+c>b){
        printf("Triangle is not POSSIBLE");
    }
    else if (a==b && b==c ){
        printf("It is an Equilateral triangle \n");
    }
    else if(a==b || b==c || a==c ){
        printf("It is Isosceles Triangle \n");
    }
    else if ( c*c==a*a+b*b ){
       
        printf("It is right angle Triangle \n");
        printf("It is also  a Scalen Triangle \n");

    }else{
        printf("It is a Scalen Triangle \n");
    }
    return 0;

}