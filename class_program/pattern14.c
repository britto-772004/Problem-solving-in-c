
// output 

// 1   2   3   4   5 
// 10   9   8   7   6 
// 11  12  13  14  15 
// 20  19  18  17  16 
// 21  22  23  24  25 

#include <stdio.h>
int main(){

    int n = 5;
    for(int i=0;i<n;i++){
        for(int j = 1;j<=5;j++){
            if(i%2 == 0){
                // even
                printf(" %2d ",(n*i)+j);
            }
            else{
                // odd
                printf(" %2d ",(n*i)+(n-j)+1);
            }
        }
        printf("\n");
    }
    return 0;
}