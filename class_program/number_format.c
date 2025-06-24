#include <stdio.h>

int zeros(int digit){
    int output=1;
    for(int i=0;i<digit;i++){
        output *=10;
    }
    return output;
}

void split_number(long int number){
    
    int first,second,third;
    first = number % 100;

    number /= 100;
    second = number %100;
    number /=100;
    third = number %100;

    printf("%d-%d-%d\n",third,second,first);
}

int main(){
    long int number = 778085;
    split_number(number);
}