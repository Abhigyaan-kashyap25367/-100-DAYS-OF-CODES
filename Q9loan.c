#include <stdio.h>
#include <math.h>
int main(){
    float p,r,t,n;
    printf("Enter principal amount : ");
    scanf("%f",&p);
    printf("Enter rate  : ");
    scanf("%f",&r);
    printf("Enter the time (year): ");
    scanf("%f",&t);
    printf("Simple interest : %f\n ",(p*r*t)/100);
    float x=(1+(r*0.01));
    printf("Compound interest : %f\n",p*(pow(x,t)));  
    return 0;
}