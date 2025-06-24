// adam number 
// 12 --> 144
// 21 --> 441

#include <stdio.h>

int reverse(int number){
    int output=0;

    int numerator,remainder;
    while(number >0){
        numerator = number /10;
        remainder = number % 10;
        output *=10;
        output +=remainder;
        number = numerator;
    }

    return output;
}

int main(){
    printf("Enter the number : ");
    int input_number;
    scanf("%d",&input_number);

    int square_input_number = input_number * input_number ; 

    int reverse_input_number = reverse(input_number);

    int square_reverse_input_number = reverse_input_number * reverse_input_number;

    int reverse_square_input_number = reverse(square_reverse_input_number);

    if(reverse_square_input_number == square_input_number){
        printf("It is adam number \n");
    }
    else{
        printf("It is not adam number \n ");
    }
}