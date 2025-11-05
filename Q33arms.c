#include<stdio.h>
#include<math.h>
int main(){
    int a , b=0 , c;
    printf("enter number ");
    scanf("%d", &a);
    int current=a;
   
   while(a!=0){
     c=a%10;
     b=b+pow(c,3);
     a=a/10;
   }if (current==b){
    printf("ARMSTRONG NUMBER %d",b);
   }else{
    printf("NOT ARMSTRONG NUMBER %d",b);
   }

    return 0;
}





/*n=153
n%10=3
n/10=15
n%10=5

*/