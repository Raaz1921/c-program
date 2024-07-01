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
for(i=1;i<n;i++){
    for(j=i;j>=1;j--){
        if(a[j-1]>a[j]){
            k=a[j-1];
            a[j-1]=a[j];
            a[j]=k;

        }
    }
}
printf("SORTED RESULT:\n ");
for(i=0;i<n;++i){
    printf("%d " , a[i]);
}

   return 0;
}