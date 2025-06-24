#include <stdio.h>


void duplicates(int arr[],int size){
    // int dup_arr[size];
    int current ;
    int count =0;
    for(int j=0;j<size;j++){
        count = 0;
        printf("iteration : %d\n",j+1);
        for(int i=0;i< size;i++){
            current = j;
            if(arr[current] == arr[i]){
                count++;
            }
            if(count == 2){
                // dup_arr[j] = arr[i];
                // count=0;
                printf("%d ",arr[i]);
                break;
            }
        }
        printf("\n");

    }


}

void duplicates_improved(int a[] ,int n){
    int last_print = -1;

    for(int i=0;i<n-1;i++){
        if(a[i] == a[i+1] && last_print != a[i]){
            printf("%d",a[i]);
            last_print = a[i];
        }
    }
}

int main(){
    int arr[] = {1,2,2,2,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    // duplicates_improved(arr,size);
    duplicates(arr,size);
}