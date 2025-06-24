#include <stdio.h>

void leapyear(int year){
    if((year % 4 ==0 && year %100 != 0) || year %400 == 0){
        printf("It is Leap year\n");
    }
    else{
        printf("It is not Leap year\n");
    }
}

int main(){
    int year = 2000;
    leapyear(year);
}