#include <stdio.h>

int main(){
    // int arr[] = {1,2,4,5};
    // int size = sizeof(arr)/sizeof(arr[0]);
    // // int *ptr = &arr;
    // for(int i=0;i<size;i++){
    //     printf("%d",*(arr+i));
    // }

    int hi = 10;
    // int *ptr = &hi;
    // printf("%d\n",*ptr);
    // hi++;
    // *ptr+=1;
    // printf("%d\n",ptr);
    // printf("%d\n",*ptr);
    // printf("%d",hi);
    // printf("\n");

    void *ptr = &hi;
    printf("%d\n",*(int *)ptr);
}