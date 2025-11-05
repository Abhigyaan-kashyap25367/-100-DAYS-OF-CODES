#include<stdio.h>
int main(){
    int n ;
    printf("enter the number ");
    scanf("%d",&n);
    int a=-1;
    for(int i=2;i<=n-1;i++){
        if(n%i==0  ){
            printf("divisible=%d\n",i);
           a=1;
           break;
        }    
    
    } if(n==1){
        printf("1 is Co-prime");
    }else if (n==0){
        printf("Neither prime nor composite \n");
    }
    else if (a==-1){
        printf("prime number \n");
    }
     else  {
        printf("composite number \n");
     }return 0;
     }
    
    
    
     
