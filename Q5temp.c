#include <stdio.h>
int main(){
    float temp;
    printf("Enter the temperature (in Celcius) : ");
    scanf("%f", & temp);
    printf ("Temperatur is %f Fehrenheits", ((temp * 1.8) ) + 32);
    return 0;
}