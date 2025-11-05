#include<stdio.h>
int main(){
    int n,m;
    printf("enter the number ");
    scanf("%d",&n);
    int arr1[n];
    for(int i=0;i<n;i++){
        printf("element n =");
        scanf("%d",&arr1[i]);
    }
    
    printf("enter the number ");
    scanf("%d",&m);
    int arr2[m];
    for(int j=0;j<m;j++){
        printf("element m =");
        scanf("%d",&arr2[j]);
    }
    int total=n+m;
    int k=0; 
    
    int merge[total];
    for(int y=0;y<n;y++){
        merge[k]=arr1[y];
        k++;

    }
    for(int p=0;p<m;p++){
        merge[k]=arr2[p];
        k++;

    }
    for(int q=0;q<total;q++){
        printf("%d ",merge[q]);
    }
    return 0;

}