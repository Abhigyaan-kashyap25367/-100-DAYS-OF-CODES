#include<stdio.h>
int main(){
    int Firstnum,Secondnum;
    printf("enter the 1st number =");
    scanf("%d",&Firstnum);
    printf("enter the 1st number =");
    scanf("%d",&Secondnum);
    int F=Firstnum,S=Secondnum;
    while(Secondnum!=0){
        int e=Firstnum%Secondnum;
        Firstnum=Secondnum;
        Secondnum=e;
    }
    printf("LCM is %d\n",(F*S)/Firstnum);
    
    return 0;
}