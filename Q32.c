#include <stdio.h>
int main(){
    int n,l,pali=0;
    printf("enter the number : ");
    scanf("%d",&n);
    int p=n;
    while(n!=0){
        l=n%10;
        pali=pali*10+l;
        n=n/10;

    }
    if ( p == pali){
        printf("It is palindrome %d",pali);
    }else{
        printf("It is not palindrome %d",pali);
    }return 0;
}