#include <stdio.h>



int main(){

    int matrix1[2][2] = {{1,2},{3,4}};
    int matrix2[2][2] = {{1,2},{3,4}};

    int row_size_1 = sizeof(matrix1)/sizeof(matrix1[0]);
    int column_size_1 = sizeof(matrix1[0])/sizeof(matrix1[0][0]);


    int result[row_size_1][column_size_1] ;

    for(int i=0;i<row_size_1;i++){
        for(int j=0;j<column_size_1;j++){
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    for(int i=0;i<row_size_1;i++){
        for(int j=0;j<column_size_1;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }

    

}