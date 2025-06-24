#include <stdio.h>

int factorial(int number){
    int sum = 1;
    for(int i=1;i<=number;i++){
        sum *= i;
    }
    return sum;
}

int main(){
    int num = 5;
    printf("%d",factorial(num));
}