// output 

// 12345
// 2345
// 345
// 45
// 5
// 54321
// 4321
// 321
// 21
// 1

#include <stdio.h>
int main(){

    int n =5;
    // uppper triangle
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            printf("%d",j);
        }
        printf("\n");
    }

    //lower triangle
    for(int i=n;i>=1;i--){
        for(int j=i;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}