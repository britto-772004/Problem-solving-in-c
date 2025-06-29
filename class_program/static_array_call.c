#include <stdio.h>

void funtion(int arr[]){
    // static arr;

    for(int i=0;i<3;i++){
        printf("%d",arr[i]);
    }

    printf("\n");
}

int main(){
    int arr[] = {1,2,3};
    funtion(arr);
}