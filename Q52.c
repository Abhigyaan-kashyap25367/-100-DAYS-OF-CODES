#include <stdio.h>
int main(){
    for (int i=1;i<=5;i=i+2){
        for (int j=1;j<=i;j++){
            printf("*\n");
        }
        printf("\n");
    }for(int t=3;t>=0;t-=2){
        for (int j=1;j<=t;j++){
            printf("*\n");
    }printf("\n");
}   
    return 0;
}