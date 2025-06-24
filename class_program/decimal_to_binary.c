#include <stdio.h>
#include <stdbool.h>

void binary(int number){
    int numerator,remainder;
    int arr[10];
    int i=0;
    while(number>0){
        numerator = number /2;
        remainder = number % 2;
        arr[i]=remainder;
        number = numerator;
        i++;
    }
    
    for(int j=i- 1; j >=0;j--){
        printf("%d ",arr[j]);
    }
    printf("\n");
}

void bitwise(int n){
    printf("%d\n",n & 1);
    while(n > 0){
        int bit = (n >> 1) & 1;
        if(bit){
            printf("%d ",1);
        }
        else{
            printf("%d ",0);
        }
        n = n >> 1;
    }
    printf("\n");
}
int main(){
    int number;
    printf("Enter the number : ");
    scanf("%d",&number);
    binary(number);
    bitwise(number);
}