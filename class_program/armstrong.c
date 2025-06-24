#include <stdio.h>

int digits(int number){
    int count =0;
    int numerator ;
    while(number >0){
        numerator = number / 10;
        count++;
        number = numerator;
    }
    return count;
}

int power (int number,int count){
    int output = 1 ;
    for(int i=0;i<count;i++){
        output = output * number;
    }
    return output;
}

int armstrong(int number){

    int armstrong = 0;
    int digit_count = digits(number);

    int remainder ;
    int quotient;

    while(number > 0){
        remainder = number % 10;
        quotient = number / 10;
        armstrong += power(remainder,digit_count);
        number = quotient;
    }
    return armstrong;
}

int main(){
    int number = 153;

    int output = armstrong(number);
    if(output == number){
        printf("It is Armstrong number \n");
    }
    else{
        printf("It is not Armstrong number \n");
    }
}