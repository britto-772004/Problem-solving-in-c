#include <stdio.h>
#include <stdbool.h>

int main(){
    int matrix1[2][2] = {{1,2},{3,4}};
    int matrix2[2][2] = {{1,2},{3,4}};

    bool counter = true;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(matrix1[i][j] != matrix2[i][j] ){
                counter = false;
            }
        }
    }

    if(counter){
        printf("Matrix is equal \n ");
    }
    else{
        printf("Matrix is not equal \n");
    }
}