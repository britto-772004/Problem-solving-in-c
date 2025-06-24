#include <stdio.h>
int main(){
    printf("Fibonacci series ");

    int range ;
    printf("How many numbers you want to print : ");
    scanf("%d",&range);

    int firstnumber = 0;
    int secondnumber = 1;
    int thirdnumber ;
    if (range <= 2){
        printf("Fibonacci series : \n %d\n , %d\n",firstnumber,secondnumber);
    }
    else{
        printf("Fibonacci series : \n %d , %d ",firstnumber,secondnumber);
        for (int i=2;i<=range;i++){
            thirdnumber = firstnumber + secondnumber;
            firstnumber = secondnumber;
            secondnumber = thirdnumber;
            printf(", %d ",thirdnumber);
        }
        printf("\n");
    }
    return 0;

}