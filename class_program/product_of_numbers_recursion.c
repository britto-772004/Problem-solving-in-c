#include <stdio.h>

int product(int number ){
    if(number == 1){
        return 1;
    }
    else{
        return number * product(number -1);
    }
}

int main(){
    int number = 3;
    printf("%d \n",product(number));
}