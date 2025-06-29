#include <stdio.h>


// aproach - 1
// int linear_search(int array[],int size,int target){
//     if(size >= 0 && array[size] == target ){
//         return 0;
//     }
//     else{
//         if(size == 0 ){
//             return 1;
//         }
//         else{
//             return linear_search(array,size-1,target);
//         }
//     }
// }


// approach - 2
int linear_search(int array[],int size,int target){
    if(size < 0){
        return -1;
    }
    if(array[size] == target){
        return 0;
    }

    return linear_search(array,size-1,target);
}

int main(){
    int array[] = {1,2,3,4,5};
    int size = sizeof(array)/sizeof(array[0]);
    int target = 2;
    int output = linear_search(array,size-1,target);
    if(output == 0){
        printf("Element found\n");
    }
    else{
        printf("Element not found\n");
    }


}