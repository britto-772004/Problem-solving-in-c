// output 

// *       *
// **      *
// * *     *
// *  *    *
// *   *   *
// *    *  *
// *     * *
// *      **
// *       *

#include <stdio.h>
int main(){
    int n =9;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==i || j==0|| j==n-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}