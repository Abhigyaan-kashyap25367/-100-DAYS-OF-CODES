#include<stdio.h>
int main(){
    float a,b;
    char ch ;
    printf("Enter a number : ");
    scanf("%f",&a);
    printf("Enter the function : ");
    scanf("%s",&ch);
    printf("Enter another number : ");
    scanf("%f",&b);
    switch(ch){
        case '+' : printf("SUM IS %f\n",a+b);
                   break;
        case '-' : printf("DIFFERENCE IS %f\n",a-b);
                   break;
        case '*' : printf("PRODUCT IS %f\n",a*b);
                   break;
        case '/' : printf("QUOTIENT IS %f\n",a/b);
                   break;
        case '%' : printf("REMAINDER IS %f\n",a%b); 
                   break;        
        default  : printf("WRONG FUNCTION \n");
                   break;                                           
    }
    printf("THANK YOU");
    return 0;
}