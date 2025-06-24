#include <stdio.h>

int main(){

    int matrix1[3][4] = {{0,0,7,0},{3,0,0,0},{3,0,1,0}};

    int result[3][4];
    int row_size = sizeof(matrix1)/sizeof(matrix1[0]);
    int column_size = sizeof(matrix1[0])/sizeof(matrix1[0][0]);
    // printf("%d %d\n",row_size,column_size);
    int k =0;
    for(int i=0;i<row_size;i++){
        for(int j=0;j<column_size;j++){
            if (matrix1[i][j] != 0){
                result[0][k] = i;
                result[1][k] = j;
                result[2][k] = matrix1[i][j];
                k++;
            }
        }
    }

    printf("Sparse matrix : \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
}