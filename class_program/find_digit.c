#include <stdio.h>

int main(){
    int number;
    printf("Enter the number to find the digit : ");
    scanf("%d",&number);
    int quotient ;
    int count = 0;
    while(number >0){
        quotient = number / 10;
        number = quotient;
        count++;
    }
    printf("Digit of the number : %d\n",count);
    return 0;
}