#include <stdio.h>


// int inner_happy(int number){
//     int sum =0;
//     int numerator,remainder;

//     while(number >0){
//         numerator = number /10;
//         remainder = number %10;
//         remainder *= remainder;
//         sum += remainder;

//         number = numerator;
//     }
//     return sum;
// }
    


// int happy(int number){

//     int output = inner_happy(number);
//     if(output == 1){
//         return 1;
//     }
//     else {
//         happy(output);
//     }
// }

int sumofsquares(int number ){
    int sum = 0;
    int remainder;
    while(number >0){
        remainder = number % 10;
        sum += remainder;
        number /=10;
    }
    return sum;
}

int ishappynumber(int number){
    int tortise = sumofsquares(number);
    int hare = number;

    while (tortise != 1 && tortise != hare){
        hare = sumofsquares(hare);
        tortise = sumofsquares(sumofsquares(tortise));
    }
    return tortise == 1;
}

int main(){
    int number ;
    printf("Enter the number : ");
    scanf("%d",&number);

    int result = ishappynumber(number);
    if(result == 1){
    printf("It is happy number \n");
    }
    else{
        printf("It is not a happy number \n");
    }

}