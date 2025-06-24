#include <stdio.h>
int main(){
    int i;
    printf("For loop\n");
    for( i=1;i<=10;i++){
        printf("%d",i);
    }

    printf("\nWhile loop\n");
    i =1;
    while(i<=10){
        printf("%d",i);
        i++;
    }
    printf("\nDo while\n");
    i=1;
    do{
        printf("%d",i);
        i++;
    }
    while(i<=10);
    printf("\n");
    return 0;
}