#include <stdio.h>
#include <stdlib.h>

void frequencyofarray(int arr[],int size){
    int count = 0;
    for(int i = 0;i<size;i++){
        count = 0;
        for(int j=0;j<size;j++){
            if(arr[i] == arr[j]){
                count++;
            } 
        }
        printf("Element  %d : %d\n",arr[i],count);
        
        
    }

    
}

int main(){
    int array[] = {1,2,3,3,4,1};
    int size = sizeof(array)/sizeof(array[0]);
    frequencyofarray(array,size);
}