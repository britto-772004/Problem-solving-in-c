#include <stdio.h>



int main(){
    int number;
    printf("Enter the number : ");
    scanf("%d",&number);

    printf("%d \n",factorial(number));

}

int factorial(int number){
    if(number == 1){
        return 1;
    }
    else{
        return number * factorial(number - 1);
    }
}