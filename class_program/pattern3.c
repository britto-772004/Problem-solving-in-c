// output 
// *
// **
// ***

#include <stdio.h>

int main(){
    int value ;
    printf("Enter the value : ");
    scanf("%d",&value);

    for(int i=1;i<=value;i++){
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}