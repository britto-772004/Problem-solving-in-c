#include <stdio.h>

int hcf(int number1,int number2){
    int hcf;
    int numerator,denominator;
    if(number1 > number2){
        numerator = number1;
        denominator = number2;
    } 
    else{
        numerator = number2;
        denominator = number1;
    }

    int remainder ;
    
    do{
        remainder = numerator % denominator ;
        numerator = denominator ;
        denominator = remainder;
    }
    while(remainder !=0);

    hcf = numerator;
    return hcf;

    
    
}

int main(){
    int number1 = 12;
    int number2 = 18;
    printf("output : %d\n",hcf(number1,number2));

}