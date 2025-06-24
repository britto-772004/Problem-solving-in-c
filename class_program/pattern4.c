// output 
// Enter the value : 3
// ***
// **
// *


#include <stdio.h>

int main(){
    int value ;
    printf("Enter the value : ");
    scanf("%d",&value);

    for(int i=value;i>=0;i--){
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}