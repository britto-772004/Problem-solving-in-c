#include <stdio.h>

void lucas(int number){
    int first = 2;
    int second = 1;
    int third;
    printf("%d %d ",first,second);
    for(int i=2;i<number;i++){
        third = first + second;
        printf("%d ",third);
        first = second;
        second = third;
    }
    printf("\n");
}

int main(){
    int input;
    printf("Enter the number : ");
    scanf("%d",&input);
    lucas(input);
}