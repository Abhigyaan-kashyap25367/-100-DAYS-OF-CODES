#include <stdio.h>
int main(){
    int marks;
    printf("Enter your score (1-100): ");
    scanf("%d",&marks);
    if (marks>=90 && marks <=100){
        printf("you have graded A  \n");
        printf("passed  \n");
    }
    else if (marks>=80 && marks<90){
        printf("You have graded B \n");
        printf("Passed \n");
    }
    else if (marks>=70 && marks <80){
        printf("you have graded C \n");
        printf("Passed \n");
    }
    else if (marks>=60 && marks<70){
        printf("You have graded D \n");
        printf("Passed \n");
    }
    else if (marks>=0 && marks<60){
        printf("You have failed the exam \n ");
    }
    else
    {
        printf("wrong entry");

    }
    return 0;
}