#include <stdio.h>
int main(){
    float a,b,c,d,e,avg;
    printf("enter the all number");
    scanf("%f %f %f %f %f" , &a, &b, &c,&d,&e);
    avg = a+b+c+d+e/5;
    printf("avegrage %f" , avg);
    return 0;
}