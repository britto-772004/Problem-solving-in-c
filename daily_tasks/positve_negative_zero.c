#include <stdio.h>
int main(){
    printf("Enter the number : ");
    int number;
    scanf("%d",&number);
    number > 0 ?  printf("Entered number is positive\n") : number == 0 ? printf("Entered number is zero\n") : printf("Entered number is negative\n");
    return 0;
}