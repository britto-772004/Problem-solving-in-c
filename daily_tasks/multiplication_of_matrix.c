#include <stdio.h>

int main(){

    int matrix1[2][2] = {{1,2},{3,4}};
    int matrix2[2][2] = {{1,2},{3,4}};

    int result[2][2];
    int sum =0;
    for(int i=0;i<2;i++){
        for(int k = 0;k<2;k++){
            sum = 0;
            for(int j=0;j<2;j++){
                sum += matrix1[j][k] * matrix2[i][j];
                }
                result[i][k] = sum;
        }
        }

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
}