#include <stdio.h>
#include <stdlib.h>

int main(){

    int size;
    printf("Enter the array size : ");
    scanf("%d",&size);

    int *arr = (int*) calloc(size,4);

    for(int i=0;i<size;i++){
        scanf("%d",(arr+i));
    }
    for(int i=0;i<size;i++){
        printf("%d ",*(arr+i));
    }

    printf("hiii \n");
    free(arr);

    arr = NULL;

    printf("\n");
}