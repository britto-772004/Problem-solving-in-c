#include <stdio.h>

int main(){
    long int number  = 8760543210;

    int third = number %10000;
    number /= 10000;

    int second = number % 1000;
    number /= 1000;

    int first = number % 1000;

    printf("%d-%d-%d\n",first,second,third);
}