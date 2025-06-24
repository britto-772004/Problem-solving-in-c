#include <stdio.h>
int main(){

    int n = 5;

        for(int i=0;i<2*n;i++){

            // upper side of the diamond
        if(i<n){
            for(int j=0;j<n-i-1;j++){
                printf(" ");
            }
            for(int j=0;j<2*i+1;j++){
                printf("*");
            }
            for(int j=0;j<n-i-1;j++){
                printf(" ");
            }
            printf("\n");
        }
        else{

            //lower side of the diamond 
            for(int j=0;j<i;j++){
                printf(" ");
            }
            for(int j=0;j<2*(n-i)-1;j++){
                printf("*");
            }
            printf("\n");
        }
        }

        return 0; 
        }

    
    
