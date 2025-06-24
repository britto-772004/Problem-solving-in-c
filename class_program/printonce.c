#include <stdio.h>
#include <stdbool.h>



void print_once(int arr[],int size){

    for(int i=0;i<size-1;i++){
       
        if(arr[i] != arr[i+1] ){
            printf("%d",arr[i]);
            
        }
    }
    
    printf("%d",arr[size-1]);
    
    
}

int main(){
    int array[] = {1,1,2,3,3,4,5};
    int size = sizeof(array)/sizeof(array[0]);
    unique_elements(array,size);
}