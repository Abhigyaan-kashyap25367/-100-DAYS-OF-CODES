#include <stdio.h>
int main(){
    int long n,r,sum=0;
    printf("Enter the number :");
    scanf("%ld",&n);
    int original_n=n;



    while(n!=0){
        r=n%10;
        int long fact=1;
    for(int i=1;i<=r;i++){
        fact=fact*i;
        
    }
    sum=sum+fact;
    n/=10;
    
    

}if(sum==original_n){
    printf("it is strong number ");
}
else{
    printf("it is not strong number ");
}
    
    return 0;
}