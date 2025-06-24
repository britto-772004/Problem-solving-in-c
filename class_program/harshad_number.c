#include <stdio.h>


int sum_of_digit(int number){
    int sum =0;
    int numerator,remainder;
    while(number > 0){
        numerator = number /10;
        remainder = number % 10;
        sum+=remainder;
        number = numerator;
    }
    return sum;
}

int harshad(int number){
    int sum = sum_of_digit(number);
    if(number % sum == 0){
        return 1;
    }
    return 0;
}

int main(){
    int number;
    printf("Enter the number : ");
    scanf("%d",&number);

    int output = harshad(number);

    if(output == 1){
        printf("It is harshad number\n");
    }
    else{
        printf("It is not harshad number \n");
    }
}