#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("\nEnter the second number : " );
    scanf("%d",&b);
    printf("\nEnter the third number : ");

    int x ;

    int root = ((b * b) - 4*a*c ); 
    
    x = (-b + sqrt(root)) / (2*a);

    printf("X value is %d",x);
    return 0;
}