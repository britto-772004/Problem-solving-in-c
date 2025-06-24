#include <stdio.h>



// approach - 1 
void bubble_sort(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j = 0;j<size -1 ;j++){
            if(arr[j] > arr[j+1]){
                // arr[j] = arr[j] ^ arr[j+1];
                // arr[j+1] = arr[j] ^ arr[j+1];
                // arr[j] = arr[j] ^ arr[j+1];

                swap(&arr[j],&arr[j+1]);
            }
        }
        printf("Iteration %d : ",i+1);
        for(int k=0;k<size;k++){
            printf("%d",arr[k]);
        }
        printf("\n");
    }
}

//approach - 2
void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// void bubble_sort(int *a,int size){
//     int j=0;
//     for(int i=0;i<size;i++){
//         j = 1;
//         while(*a != *(a+size -1 )){
//             if(*(a) == *(a+j)){
//                 swap(a,(a+j));
//             }
//             a++;
//             j++;
//         }

        
//     }
// }

int main(){
    int arr[] = {5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,size);
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}