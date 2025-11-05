#include<stdio.h>
int main(){
    int n;
    printf("enter the number ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    printf("REVERSE ORDER =");
    for(int i=n-1;i>-1;i--){
        printf("%d ",arr[i]);

    }

    return 0;
}