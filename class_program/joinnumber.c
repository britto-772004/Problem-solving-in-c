#include <stdio.h>

int digits(int number){
    int size_of_number2=0;
    int numerator;
    while(number >0){
        numerator = number / 10;
        size_of_number2 ++;
        number = numerator;
    }
    return size_of_number2;
}

int addzeros(int number,int zero){
    for(int i=0;i<zero;i++){
        number *=10;
    }
    return number;
}

int join(int number1,int number2){
    // find the digits of the number2
    int size_of_number2=digits(number2);

    // add zeros to number1
    number1 = addzeros(number1,size_of_number2);

    return number1 + number2;
    
}

int main(){
    int number1= 129;
    int number2 = 360;

    printf("output : %d \n",join(number1,number2));

}