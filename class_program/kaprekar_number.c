#include <stdio.h>

// input = 3, output = 1000 or input =2 , output = 100
int zero_number(int number ){
    int output = 1;

    for(int i=0;i<number;i++){
        output *= 10;
    }
    return output;
}
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

// sum of split no
int split_no(int number){
    int size = size_of_number(number) ;

    int mid_size = size / 2;
    int zeros = zero_number(mid_size);
    int first = number / zeros;
    int last = number % zeros;

    return first+last;
}

int main(){
    int number;
    printf("Enter the number : ");
    scanf("%d",&number);

    int square_of_number = number * number;

    int output = split_no(square_of_number);

    if(output == number){
        printf("It is Kaprekar number\n");
    }
    else{
        printf("It is not kaprekar number \n");
    }


}