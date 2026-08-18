#include <stdio.h>
int main(){
    int a ;
    int b ;
    int area ; 
    int perimeter;
    printf("enter a and b: ");

     scanf("%d %d", &a , &b );
      
       area = a * b ;
       perimeter = 2 * (a+b) ;
        printf("area = %d, perimeter = %d", area , perimeter);
      return 0 ;
}