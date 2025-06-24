#include <stdio.h>

int main(){
    int matrix[2][3] = {{1,2,4},{3,4,5}};

    int result[3][2];


    printf("Before transpose : \n");
    for(int i =0 ; i<2;i++){
        for(int j = 0; j<3;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    
    for(int i =0 ; i<3;i++){
        for(int j = 0; j<2;j++){
            result[i][j] = matrix[j][i];
        }
    }

    printf("After transpose : \n");
    for(int i =0 ; i<3;i++){
        for(int j = 0; j<2;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
}