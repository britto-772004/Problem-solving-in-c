#include <stdio.h>
int main(){
    int n = 4;

    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        //numbers
       
        //forward
        for(int k=1;k<=i;k++){
            printf("%d",k);
        }
        // backward
        for(int k=i-1;k>=1;k--){
            printf("%d",k);
        }
        
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        printf("\n");
    }
    return 0;

}