/*#include<stdio.h>
int main(){
    int n,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0,count0=0;
    printf("enter the number ");
    scanf("%d",&n);
    int arr[]={n};
    while(n!=0){
        int k=n%10;
        if(k==0){
            count0++;
        }
        else if(k==1){
            count1++;
        }
        else if(k==1){
            count1++;
        }
        else if(k==2){
            count2++;
        }
        else if(k==3){
            count3++;
        }
        else if(k==4){
            count4++;
        }
        else if(k==5){
            count5++;
        }
        else if(k==6){
            count6++;
        }else if(k==7){
            count7++;
        }else if(k==8){
            count8++;
        }else {
            count9++;
        }
        n/=10;

    }
    printf("0=%d\n",count0);
    printf("1=%d\n",count1);
    printf("2=%d\n",count2);
    printf("3=%d\n",count3);
    printf("4=%d\n",count4);
    printf("5=%d\n",count5);
    printf("6=%d\n",count6);
    printf("7=%d\n",count7);
    printf("8=%d\n",count8);
    printf("9=%d\n",count9);
    return 0;

}*/

#include<stdio.h>
#include<limits.h> 

int main() {
    int n, temp_n;

    int digit_counts[10] = {0}; 
    
    printf("Enter the number: ");
    scanf("%d", &n);
    
    
    temp_n = n; 
    
    
    if (temp_n == 0) {
        digit_counts[0] = 1;
    }

    
    while (temp_n != 0) {
        int digit = temp_n % 10; 
        
        
        digit_counts[digit]++;   
        
        temp_n /= 10;           
    }
    

    
    int  max_count = -1; 
    int most_frequent_digit = -1; 
    for (int i = 0; i < 10; i++) {
       
        if (digit_counts[i] >= max_count) {
            max_count = digit_counts[i]; 
            most_frequent_digit = i;     
        }
    }

    printf("\n--- Digit Frequencies ---\n");
    for(int i = 0; i < 10; i++) {
        printf("Digit %d occurred %d times.\n", i, digit_counts[i]);
    }

    printf("\n--- Result ---\n");
    printf("The digit that occurs the most times in %d is: %d\n", n, most_frequent_digit);
    printf("It occurred %d times.\n", max_count);
    
    return 0;
}