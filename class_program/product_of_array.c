#include <stdio.h>

int productofarray(int arr[],int size){
    int product = 1;
    for(int i=0;i<size;i++){
        product *= arr[i];
    }
    return product;
}

int averageofarray(int arr[],int size){

}

int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];

    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d\n",productofarray(arr,size));
}