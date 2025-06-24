#include <stdio.h>

int main(){
int arr[] = {1,5,9};


int size = sizeof(arr)/sizeof(arr[0]);
// int arr2[size];
for(int i=0;i<size;i+=2){
    arr[i] = arr[i] * arr[i];
}

for(int i=0;i<size;i++){
    printf("%d,",arr[i]);
}

printf("\n");
}