#include<stdio.h>
int main(){
    int firstnum,secondnum;
    printf("enter the 1st number ");
    scanf("%d",&firstnum);
    printf("enter the 2nd number ");
    scanf("%d",&secondnum);
    while(secondnum!=0){
        int gcd=firstnum % secondnum;
        firstnum=secondnum;
        secondnum=gcd;
    }
    printf("%d\n",firstnum);
    return 0;
}