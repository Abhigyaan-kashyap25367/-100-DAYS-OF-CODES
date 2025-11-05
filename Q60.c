#include<stdio.h>
int main(){
    int n,Positive_count=0,Negative_count=0,Zero_count=0;
    printf("enter the number =");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            Positive_count++;

        }
        else if(arr[i]<0){
            Negative_count++;

        }
        else{
            Zero_count++;
        }
    }
    printf("Total POSITIVE COUNT =%d\n",Positive_count);
    printf("Total NEGATIVE COUNT =%d\n",Negative_count);
    printf("Total ZEROS COUNT =%d\n",Zero_count);
    return 0;
}