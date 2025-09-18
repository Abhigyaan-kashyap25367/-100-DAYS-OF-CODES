#include<stdio.h>
int main(){
    float p,s,profit,loss;
    printf("Enter Purchase price : ");
    scanf("%f",&p);
    printf("Enter the Selling price : ");
    scanf("%f",&s);
    float i=s-p;
    if(i>0){
        printf("PROFIT \n");
        printf("%f percent \n",(i/p)*100);
    }else if (i<0){
        printf("LOSS \n");
        printf("%f percent \n",-(i/p)*100);
    }
    else {
        printf("NO PROFIT AND LOSS");
    }
    return 0;


}