#include <stdio.h>

int main() {
    int n,binary=0,power=1;
    printf("enter the number =");
    scanf("%d",&n);
    while(n!=0){
        int remainder =n%2;
        binary = binary + (remainder * power);
        power=power*10;
        n=n/2;
        

    }
    printf("binary representation =%d\n",binary);

    return 0;
}