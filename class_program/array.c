#include <stdio.h>
int main(){

    printf("Enter the size of the array : ");
    int size_arr ;
    scanf("%d",&size_arr);
    int arr[size_arr];
    // int input ;
    printf("Enter the elements : \n");
    for(int i=0;i<size_arr;i++){
        scanf("%d",&arr[i]);
        // arr[i]=input;
    }
    printf("Elements in the array => ");
    for(int i=0;i<size_arr;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    // int arr[4]={2,3,6};
    // printf("%d\n",arr);
    // printf("%d\n",&arr[0]);
    // printf("%d\n",sizeof(arr));
    // // printf("%d",arr[3]);

    // char hi[]="hello world";

    // printf("%s\n",hi);
}