#include <stdio.h>
int main(){
    for (int i=1;i<=9;i=i+2){
        for (int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }for(int t=7;t>=0;t-=2){
        for (int j=1;j<=t;j++){
            printf("*");
    }printf("\n");
}   
    return 0;
}