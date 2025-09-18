#include <stdio.h>
int main(){
    int year;
    printf("Enter the year : ");
    scanf("%d",&year);
    if (year%4 == 0){
        printf("It's Leap year");

    } else {
        printf("It's not Leap year");
    }
    return 0;
}