#include <stdio.h>
int main(){

    int number;
    printf("Enter the range of the prime numbers : ");
    scanf("%d",&number);
    int flag =0;
    if(number < 2){
        printf("No prime numbers");
    }
    else{
        printf("Prime numbers are : ");
        for(int i=2;i<= number;i++){
            flag = 0;
            for(int j=2;j<i;j++){
                if(i %j == 0){
                    flag =1;
                    break;
                }
            }
            if(flag == 0){
                printf(" %d ",i);
            }
        }
        printf("\n");
    }
    return 0;
}