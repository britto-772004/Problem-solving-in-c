// output 

// 1
// 2*3
// 4*5*6
// 7*8*9*10
// 11*12*13*14*15

#include <stdio.h>

int main(){
    int n=5;
    int hi = 1;

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%d",hi);
            hi++;
            if(j<i){
                printf("*");
            }
        }

        printf("\n");
    }

    return 0;
}