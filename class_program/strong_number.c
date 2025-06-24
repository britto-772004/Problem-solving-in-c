#include <stdio.h>

int factorial(int number){
    int sum = 1;
    for(int i=1;i<=number;i++){
        sum *= i;
    }
    return sum;
}

int strong_number(int number){
    int sum =0;

    int numerator, remainder;
    while(number > 0){
        numerator = number / 10;
        remainder = number % 10;

        sum += factorial(remainder);
        number = numerator;
    }
    return sum;
}

int main(){
    int number;
    printf("Enter the number : ");
    scanf("%d",&number);

    int output = strong_number(number);
    if(output == number){
        printf("It is the strong number\n");
    }
    else{
        printf("It is not the strong number \n ");
    }
}