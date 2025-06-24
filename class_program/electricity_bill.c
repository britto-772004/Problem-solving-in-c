#include <stdio.h>

// 0 - 100 => 1.5
// 101 - 200 => 2.5
// 201 - 300 => 3.5
// above 300 = 5


int main(){
    printf("Enter the eletricity unit : ");
    int unit ;
    scanf("%d",&unit);


    int amount = 0;

    if (unit > 300){
        amount += 500;
        
    }
    else if(unit>= 201 && unit<=300){
        amount += 350;
        unit -= 100;
    }
    else if(unit >=101 && unit<=200){
        amount += 250;
        unit -= 100;
    }
    else if(unit >=0 && unit <= 100){
        amount += 150;
        unit -= 100;
    }

    return 0;
}