#include<stdio.h>
int main(){
    float n,u=3.0,v=4.0;
    float a=1.0,sum=1.0;
    printf("enter ");
    scanf("%f",&n);
    for(int i=1;i<=n;i++){
    printf("element%f\n ",a);
    sum=sum+a;
    a=a*(u/v);    
    u=u+2;
    v=v+2;
    
} printf("sum =%f\n",sum); 
return 0;
}