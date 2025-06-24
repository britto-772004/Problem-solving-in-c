#include <stdio.h>

int main(){

    printf("Enter the number : ");
    int number ;
    scanf("%d",&number);
    number % 2 == 0 ? printf("It is the even number \n") : printf("It is the odd number \n");
    return 0;
}