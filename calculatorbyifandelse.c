#include <stdio.h>

int main(){
     char ch;
    printf("enter the operators");
    scanf("%c" ,&ch);
    int a;
    printf("enter the 1st number");
    scanf("%d" , &a);
    int b;
    printf("enter the secound number");
    scanf("%d" ,&b);

    if(ch== '+') printf("%d" , a+b);
    else if(ch== '-') printf("%d" , a-b);
    else if(ch== '*') printf("%d" , a*b);
    else if(ch== '/') printf("%d" , a/b);
     else printf("INVALID OPERATORS");
     return 0;
}