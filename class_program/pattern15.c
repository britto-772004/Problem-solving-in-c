#include <stdio.h>
int main(){
    int n =4;
    int hi=1;
    int temp;
    // for(int i=0;i<n;i++){
    //     temp = hi;
    //     for(int j=0;j<=i;j++){
    //         if(i%2 == 0){
    //             //even 
    //             printf("%d",hi);
    //             hi++;
    //         }
    //         else{
    //             //odd 
    //             printf("*");
    //             hi--;
    //         }
    //     }
    //     hi = temp;
    //     printf("\n");
    // }

    for(int i=1;i<=n;i++){
        if(i%2 == 0){
            for(int j = hi +i ;j<=i;j--){
                printf("%d",j);
            }
            printf("\n");
        }
        else{
            //odd rows 
            for(int j=1;j<=i;j++){
                printf("%d",hi);
                hi++;
            }
            printf("\n");
        }
    }
    return 0;
}