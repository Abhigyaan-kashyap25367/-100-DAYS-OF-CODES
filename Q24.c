#include <stdio.h>
int main(){
    float unit ;
    printf("Enter the units :");
    scanf("%f",&unit);
    if (unit <=100){
        unit *=5;
        printf("BILL : ₹%f\n",unit); 
    }else if (unit <=200){
        unit =500+(unit -100)*7;
        printf("BILL : ₹%f \n",unit);
    }else if (unit <=300){
        unit =500+700+(unit -200)*10;
        printf("BILL :₹%f \n",unit);
    }else {
        unit =500 +700+1000+(unit-300)*12;
        printf("BILL :₹%f \n",unit); 
    } return 0;
}