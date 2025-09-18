#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);
    if (ch>='a' && ch<='z'){
        printf("It is a Lowercase alphabet \n");
    }
    else if (ch>='A' && ch<='Z'){
        printf("It is Uppercase alphabet \n");
    }
    else if(ch>='0' && ch<='9'){
        printf("It is a Digit \n");
    }
    else{
        printf("Special Character \n");
    }
    return 0;
}