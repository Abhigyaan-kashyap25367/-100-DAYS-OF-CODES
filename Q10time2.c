#include <stdio.h>
int main(){
    int sec,hrs,min,total_sec;
    printf("enter the time is seconds : ");
    scanf("%d",&total_sec);
    hrs=total_sec/3600;
    min =(total_sec%3600)/60;
    sec=total_sec%60;

    printf("hrs:min:sec = %d:%d:%d",hrs,min,sec);
    return 0;
}