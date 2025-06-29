#include <stdio.h>

int binary_search(int array[],int size,int target,int left,int right){

    int mid = (left+right) / 2;
    if(left <= right){
        if(array[mid] == target  ){
            return 0;
        }
        else if(array[mid] > target){
            right = mid - 1;
            binary_search(array,size,target,left,right);
        } 
        else{
            left = mid + 1;
            binary_search(array,size,target,left,right);
        }
    }
    else{
        return 1;
    }
}

int main(){
    int number[] = {1,2,3,4,5,6};
    int size = sizeof(number)/sizeof(number[0]);
    int left = 0;
    int right = size -1;
    int target = 6;
    int output = binary_search(number,size,target,left,right);
    if(output == 0){
        printf("Element found \n");
    }
    else{
        printf("Element not found\n");
    }

}