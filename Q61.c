#include<stdio.h>
int main(){
    int n ,target;
    printf("enter the number =");
    scanf("%d",&n);
    int arr[n];
    int found_index= -1;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Target =");
    scanf("%d",&target);
    for(int i=0;i<n;i++){ 
        if(arr[i]==target){
            found_index=i;
            
            break;
        } 
    }if(found_index!=-1){
    printf("The value %d is found at index %d\n", target, found_index);
    }
    else{
        printf("not found %d\n",found_index);
    }
     return 0;
}