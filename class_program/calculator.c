#include <stdio.h>

int main(){
    int number1,number2;
    char operator;
    printf("Give two numbers and operator (+,-,*,/,%) to perform : ");
    scanf("%d %d %c",&number1,&number2,&operator);
    // printf("%d\n",number1 + number2);

    switch (operator){
        case '+':
            printf("Addition of two numbers is %d\n",number1+number2);
            break;
        case '-':
            printf("Subtraction of two numbers is %d\n",number1 - number2);
            break;
        case '*':
            printf("Multiplication of two numbers is %d\n",number1 * number2);
            break;
        case '/':
            printf("Division of two numbers is %d\n",number1 / number2);
            break;
        case '%':
            printf("Remainder of two numbers is %d\n",number1 % number2);
            break;
    }
}