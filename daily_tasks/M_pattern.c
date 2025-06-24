// output 

// *       *
// **     **
// * *   * *
// *  * *  *
// *   *   *
// *       *
// *       *
// *       *
// *       *

#include <stdio.h>
int main(){
    int n = 9;
    // upper M
    for(int i=0;i<n-(n/2);i++){
        
        for(int j=0;j<n;j++){
            if(j==i|| j==0 || j== n-1 || j== n-i-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    // lower M

    for(int i=0;i<(n/2);i++){
        
        for(int j=0;j<n;j++){
            if(j==0 || j==n-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}