#include <stdio.h>
int main(){
int i,n,j,k;
printf("enter the size of array:");
scanf("%d" , &n);
int a[n];
printf("enter the value of array:");
for(i=0;i<n;++i){
    scanf("%d" , &a[i]);
}
for(i=n;i>0;i--){
    for(j=0;j<i-1;j++){
        if(a[j]>a[j+1]){
            k=a[j];
            a[j]=a[j+1];
            a[j+1]=k;

        }
    }
}
printf("SORTED RESULT:\n ");
for(i=0;i<n;++i){
    printf("%d " , a[i]);
}

   return 0;
}