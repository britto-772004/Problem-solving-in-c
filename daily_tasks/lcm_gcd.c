#include <stdio.h>
int main(){
    int num1 = 12;
    int num2 = 15;

    //lcm = 60 , gcd = 3

    int numerator , denominator ;

    if(num1 >num2){
        numerator = num1;
        denominator = num2;
    }
    else{
        numerator = num2;
        denominator = num1;
    }

    int remainder = numerator % denominator ; 

    while(remainder != 0){
        numerator = denominator;
        denominator = remainder;
        remainder = numerator % denominator;
    }

    int gcd = denominator;
    int lcm = (num1 * num2)/gcd;

    printf("LCM of %d and %d is : %d\n",num1,num2,lcm);
    printf("GCD of %d and %d is : %d\n",num1,num2,gcd);
}