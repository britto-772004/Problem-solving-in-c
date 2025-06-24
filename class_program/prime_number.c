#include <stdio.h>
#include <math.h>

void prime(int number){
    if(number<2){
        printf("It is not prime number\n");
    }
    else{
        int flag = 0;
        int range = sqrt( (double) number);
        for(int i=2;i< range ;i++){
            if(number % i == 0){
                flag = 1;
            }
        }
        if(flag == 1){
            printf("It is not prime number\n");
        }
        else{
            printf("It is a prime number\n");
        }
    }
}
int main(){
    int number = 6;
    prime(number);
    
}