#include <stdio.h>
int main(){
    int num;
    printf("Enter the number between (0 - 6) : ");
    scanf("%d",&num);

    switch (num){
        case 0:
            printf("Sunday");
            break;
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thrusday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        default:
            printf("You entered the input beyond the limit ( 0 - 6)");
    }
    return 0;
}