#include <stdio.h>
#include <stdlib.h>


int* copy_array(int array[],int size){
    int* arr = (int*) malloc(size);

    for(int i=0;i<size;i++){
        arr[i]=array[i];
    }

    return arr;
}

int main(){
    int array[] = {1,2,3,4};
    int size = sizeof(array)/sizeof(array[0]);
    int *hi = copy_array(array,size);

    for(int i=0;i<size;i++){
        printf("%d ",hi[i]);
    }

    free(hi);
}