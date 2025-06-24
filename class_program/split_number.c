#include <stdio.h>

int size_of_number(int number){
    int size =0;

    int numerator;
    while(number > 0){
        numerator = number / 10;
        size++;
        number = numerator;
    }
    return size;
    
}

int reverse(int number){
    int output=0;

    int numerator,remainder;
    while(number >0){
        numerator = number /10;
        remainder = number % 10;
        output *=10;
        output +=remainder;
        number = numerator;
    }

    return output;
}

// input = 3, output = 1000 or input =2 , output = 100
int zero_number(int number ){
    int output = 1;

    for(int i=0;i<number;i++){
        output *= 10;
    }
    return output;
}

int main(){
    int number ;
    printf("Enter the number : ");
    scanf("%d",&number);

    int size = size_of_number(number) ;

    // approach : 1

    // int numerator,remainder;
    // int last = 0,first=0;
    // for(int i=0;i<size;i++){
    //     if(i < size /2){
    //         numerator = number / 10 ;
    //         remainder = number % 10;
    //         last *=10;
    //         last +=remainder;
    //         number = numerator;
    //     }
    //     else{
    //         numerator = number / 10 ;
    //         remainder = number % 10;
    //         first *=10;
    //         first +=remainder;
    //         number = numerator;
    //     }
    // }

    // first = reverse(first);
    // last = reverse(last);

    // approach : 2

    int mid_size = size / 2;
    int zeros = zero_number(mid_size);
    int first = number / zeros;
    int last = number % zeros;



    printf("first : %d\n",first);
    printf("Second : %d\n",last);

}