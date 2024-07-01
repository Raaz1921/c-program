// #include <stdio.h>
// int main(){
//     int n;
//     printf("enter the number of row");
//     scanf("%d" ,&n);
// for(int i=1;i<=n;i++) {
//     printf("********\n");
//     }
//     return 0;
// }




// #include <stdio.h>
// int main(){
//     int n;
//     printf("enter the number of row");
//     scanf("%d" ,&n);
//     int m;
//     printf("enter the number of column");
//     scanf("%d" ,&m);
// for(int i=1;i<=n;i++) {
//     for(int j=1;j<=m;j++) 
//     {printf("*  ");
//      } 
//      printf("\n"); }

//     return 0;
// }


#include <stdio.h>
int main(){
    int n;
    printf("enter the number up to ");
    scanf("%d" ,&n);
for(int i=1;i<=n;i++) {
    for(int j=1;j<=n;j++) 
    {printf("%d " , j);
     } 
     printf("\n"); }

    return 0;
}