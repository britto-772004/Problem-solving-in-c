#include <stdio.h>

int main(){
    int matrix1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    printf("Primary array : ");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i == j){
                printf("%d ",matrix1[i][j]);
            }
        }
    }
    printf("\n");
    printf("Secondary matrix : ");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(j== 3-i-1){
            printf("%d ",matrix1[i][j]);
            }
            
        }
    }
    printf("\n");
}