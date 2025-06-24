#include <stdio.h>

//input = 19 , output = 2
int digit_count(int number){
    int sum=0;
    int numerator,remainder;
    while(number > 0 ){
        numerator =  number /10;
        remainder = number % 10;
        sum++;

        number = numerator;
    }
    return sum;
}

// input = 3,3 output= 27
int power(int number,int powervalue){
    int output = 1;
    for(int i=0;i<powervalue;i++){
        output *=number;
    }
    return output;
}

int disarium(int number){
    int number_count = digit_count(number);
    int numerator,remainder;
    int sum =0;
    for(int i = number_count;i>0;i--){

        numerator = number/10;
        remainder = number %10;
        sum += power(remainder,i);
        number = numerator ;
        
    }
    return sum;
}

int main(){
    int number;
    printf("Enter the number : ");
    scanf("%d",&number);
    int output = disarium(number);
    if(output == number){
        printf("It is disarium number\n");
    }
    else{
        printf("It is not disarium number \n");
    }
}