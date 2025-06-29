#include <stdio.h>


void array_fill(int array[],int size){
    if(size == -1){
        return ;
    }
    
    array_fill(array,size-1);
    printf("%d ",array[size]);
   
}

int main(){
    int array[] = {1,2,3,4,5,6};
    int size = sizeof(array)/sizeof(array[0]);

    array_fill(array,size-1);
    printf("\n");


}