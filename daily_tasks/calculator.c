#include <stdio.h>
#include <stdbool.h>

int main(){
    int number1,number2;
    char operator;
    int operation;

    bool flag = true ;
    while(flag){
    
        printf("Calculator \n Enter the operation to be perform : \n 1. Addition \n 2. Subtraction \n 3. multiptlication \n 4. Division \n 5. Modulus \n 6. Quit\n");
        printf("Enter the operation (1- 6) : ");
        scanf("%d",&operation);
    // printf("%d\n",number1 + number2);

    switch (operation){
        case 1:
            printf("Enter the two numbers : ");
            scanf("%d %d",&number1,&number2);
            printf("Addition of two numbers is %d\n",number1+number2);
            break;
        case 2:
            printf("Enter the two numbers : ");
            scanf("%d %d",&number1,&number2);
            printf("Subtraction of two numbers is %d\n",number1 - number2);
            break;
        case 3:
            printf("Enter the two numbers : ");
            scanf("%d %d",&number1,&number2);
            printf("Multiplication of two numbers is %d\n",number1 * number2);
            break;
        case 4:
            printf("Enter the two numbers : ");
            scanf("%d %d",&number1,&number2);
            printf("Division of two numbers is %d\n",number1 / number2);
            break;
        case 5:
            printf("Enter the two numbers : ");
            scanf("%d %d",&number1,&number2);
            printf("Remainder of two numbers is %d\n",number1 % number2);
            break;
        case 6:
            flag = false;
    }

}
printf("Thankyou\n");
}