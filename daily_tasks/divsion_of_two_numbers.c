#include <stdio.h>
int main(){
    printf("Enter the number 1 : ");
    int number1;
    int number2;
    scanf("%d",&number1);
    printf("\nEnter the number 2 : ");
    scanf("%d",&number2);

    double result =(double) number1 / number2;
    printf("Division of %d and %d is %lf\n",number1,number2,result);
    return 0;
}