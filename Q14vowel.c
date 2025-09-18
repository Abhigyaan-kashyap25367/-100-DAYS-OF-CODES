#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character (A-Z or a-z): ");
    scanf("%c", &ch);
    if (ch== 'a'||ch=='e'||ch=='i'||ch=='o'||ch=='u' ||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        printf("It's a Vowel \n");
    }else{
        printf("It's a Consonant \n");
    }
    return 0;
}
