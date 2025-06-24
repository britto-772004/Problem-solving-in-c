#include <stdio.h>
int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);

    int arr[size];
    int sum =0;
    printf("Enter the elements :\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }

    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    printf("sum : %d",sum);
    printf("\n");

    return 0;
}