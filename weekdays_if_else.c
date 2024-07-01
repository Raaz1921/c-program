#include <stdio.h>
int main (){

    int x;
    printf("enter the number");
    scanf("%d" , &x);

    if(x==1) printf("monday");
   else if(x==2) printf("TUESDAY");
   else if(x==3) printf("WEDNESDAY");
   else if(x==4) printf("THRUSDAY");
   else if(x==5) printf("FRIDAY");
   else if(x==6) printf("SATUARDAY");
   else if(x==7) printf("SUNDAY");
     else printf("NOT VALID");
     return 0;
}