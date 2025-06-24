#include <stdio.h>

int main(){
    int value;
    printf("Enter the value : ");
    scanf("%d",&value);

    for(int i=0;i<value;i++){
        for(int j=0;j<3;j++){
            printf("*\t");
        }
        printf("\n");
    }
}