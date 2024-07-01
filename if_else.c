// #include <stdio.h>

// int main() {
//     int x;
//     printf(" enter the number");
//     scanf("%d" , &x);
//     if(x>0) printf("POSITIVE NUMBER");
//     if(x<0) printf(" NEGETIVE NUMBER");
//       if(x==0) printf (" NUMBER IS ZERO");
//   return 0;
// }


// PRINTING ODD AND EVEN



// #include <stdio.h>

// int main() {
//     int x;
//     printf(" enter the number");
//     scanf("%d" , &x);
//     if(x%2==0 ) printf("EVEN NUMBER");
//     if(x%2!=0) printf(" ODD NUMBER");
//   return 0;
// }



// #include <stdio.h>

// int main() {
//     int x;
//     printf(" enter the number");
//     scanf("%d" , &x);
//     if(x>0){ 
//      printf("POSITIVE NUMBER\n");
//      printf("BADHIYA");
//     }
//     if(x<0) printf(" NEGETIVE NUMBER");
//       if(x==0) printf (" NUMBER IS ZERO");
//   return 0;
// }




int main() {
    int x;
    printf(" enter the number");
    scanf("%d" , &x);
    if(x<0){
        x= x*(-1);
    }
      if(x==0) printf (" NUMBER IS ZERO");
printf("%d THE ABSOLUTE VALUE" , x);
  return 0;
}




 