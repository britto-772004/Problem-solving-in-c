#include <stdio.h>

int lcm(int number1,int number2){
   
    int last = number1 > number2 ? number1 : number2;
    int lcm =last;
    while (last > 0){
        if( lcm % number1 == 0 && lcm % number2 == 0){
            return lcm;
        }
        lcm +=last;
    }
}

int main(){
    int number1 = 2;
    int number2 = 3;
    printf("%d\n",lcm(number1 , number2));
}