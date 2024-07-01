#include <stdio.h>
int main(){
    float e,fer;
    printf("enter the temprature in c");
    scanf("%f" , &e);
    fer = 5*(e-32)/9;
    printf("in fer %f" , fer);
    return 0;
}