// input : [1,2,2,3,3,5]

// output : [2,3]

#include <stdio.h>
#include <stdlib.h>

int* print_duplicates(int arr[],int size){

    int* hi = (int*) malloc(size);

    int count ;
    for(int i=0;i<size;i++){
        count =0;
        for(int j=0;j<size;j++){
            if(arr[i] == arr[j]){
                
                if(count == 1){
                    hi[i] = arr[i];
                    arr[i] = -1;
                    break;
                }
                count++;
            }
        }
        
    }
    return hi;
    
}

int main(){
    int arr[] = {10,2,45,2,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int *hi = print_duplicates(arr,size);
    for(int i=0;i<size;i++){
        printf("%d ",*(hi+i));
    }
}