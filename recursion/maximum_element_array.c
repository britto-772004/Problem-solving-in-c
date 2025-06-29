#include <stdio.h>

int maximumelement(int array[],int size,int max){
    if(size < 0){
        return max;
    }

    if(array[size] > max){
        max = array[size];
    }
    return maximumelement(array,size-1,max);
}

int main(){
    int array[] = {10,8,3,4,5};
    int size = sizeof(array)/sizeof(array[0]);
    int max = array[size -1];
    int output = maximumelement(array,size-2,max);
    printf("%d \n",output);
}