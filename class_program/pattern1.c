// output 

// 1 
// 2  3 
// 4  5  6 
// 7  8  9  10 
// 11  12  13  14  15 


#include <stdio.h>
int main(){

    int value = 1;

    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            // printf(" %d ",value);
            // printf(" %d ",(i*(i-1))/2+j);
            printf(" %d ",(2*i)-1);
            value++;
        }
        printf("\n");
    }

    // int j = 1;
    // for(int i=0;i<4;i++){
    //     for(j =1;j<=i;j++){

    //         printf("%d",j);
    //     }
    //     printf("\n");
    // }

    // for(int i =0;i<4;i++){
    //     for(int j=0;j<=i;j++){
    //         printf("%d",(2*i)+j+1);
    //         // printf("%d", (i* (i+1)));
    //     }
    //     printf("\n");
    // }

    return 0;
}