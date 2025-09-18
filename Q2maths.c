#include <stdio.h>
int main(){
    int a=79;
    int b=11;
    int c;
    int k;
    int l;
    float u;
    u=(float) a/b;
    l=a-b;
    k=a*b;
    c=a+b;
    int o=a%b;
    printf("div is %f\n",u);
    printf("multiply is %d\n",k);
    printf("sub is %d\n",l);
    printf("sum is %d\n",c);
    printf("remainder is %d\n",o);
    return 0;
}