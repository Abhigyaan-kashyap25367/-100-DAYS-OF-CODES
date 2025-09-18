#include <stdio.h>
int main(){
    int product,n;
    product=1;
    printf("enter the number : ");
    scanf("%d",&n);
    
     if(n!=0) {for(int i=2;i<=n;i+=2)
    {product*=i;
        
        printf("%d\n",i);
    }
}
    else{
            printf("ANSWER IS 0");
    }
    printf("%d\n",product);
    return 0;
}