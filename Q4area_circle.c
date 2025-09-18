#include<stdio.h>
int main(){
    float r;
    printf("radius of circle: ");
    scanf("%f" , &r);
    float pi=3.14;
    printf("area of cirle is %f\n", pi*r*r);
    printf("circumference of circle is  %f\n",2*pi*r);
    return 0;
}