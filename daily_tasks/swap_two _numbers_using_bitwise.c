#include <stdio.h>
int main(){

    int a = 10;
    int b = 20;
    printf("Before swap => %d and %d\n",a,b);
    a= a^b;
    b=a^b;
    a=a^b;
    printf("After swap => %d and %d\n",a,b);
    return 0;

}