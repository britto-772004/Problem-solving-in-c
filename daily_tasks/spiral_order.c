#include <stdio.h>


void spiral(int array[5][5],int row_size,int column_size){
    int up_left = 0;
    int up_right = column_size;
    int bottom_right = row_size;
    int bottom_left = column_size;

    for(int i=0;i<row_size ;i++){
        for(int j=0;j<up_right;j++){
            printf("%d ",array[i][j]);
        }

        for(int j=1;j<bottom_right;j++){
            printf("%d ",array[j][column_size-1]);
        }

        for(int j=bottom_right - 1; j >= bottom_left ; j--){
            printf("%d ",array[bottom_right][j]);
        }

        for(int j =bottom_left - 1; j>= up_left;j--){
            printf("%d ",array[j][up_left]);
        }

        up_left++;
        up_right--;
        bottom_right--;
        bottom_left--;
    }
    printf("\n");
}

int main(){
    int array[5][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
    int row_size = sizeof(array)/sizeof(array[0]);
    int column_size = sizeof(array[0])/sizeof(array[0][0]);

    spiral(array,row_size,column_size);
}