// output 

// 1
// 24
// 135
// 2468
// 13579

#include <stdio.h>

int main(){
    int n=5;

    // for(int i=1;i<n;i++){
    //     for(int j=2;j<=(2*n)+1;j+=0){
    //         if(i % 2 == 0){
    //             j=i;
    //             printf("%d",j);
    //             j+=2;
    //         }
    //         else{
    //             printf("%d",j);
    //             j+=2;

    //         }
    //     }
    // }
    int hi ;
    for(int i=1;i<=n;i++){
        if(i%2 != 0 ){
            hi = 1;
            for(int j=1;j<=i;j++){
                printf(" %d ",hi);
                hi +=2;
            }
            printf("\n");
        }
        else{
            hi = 2;
            for(int j=1;j<=i;j++){
                printf(" %d ",hi);
                hi +=2;
            }
            printf("\n");
        }
    }
    return 0;
}