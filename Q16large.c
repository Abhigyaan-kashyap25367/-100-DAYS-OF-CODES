#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the 1st number : ");
    scanf("%d",&a);
    printf("Enter the 2nd number : ");
    scanf("%d",&b);
    printf("Enter the 3rd number : ");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("Largest number 1st: %d\n",a);
    }
    else if(b>a && b>c){
        printf("Largest number 2nd: %d\n",b);
    }else {
        printf("Largest number 3dr : %d\n",c);
    }
    return 0;
}