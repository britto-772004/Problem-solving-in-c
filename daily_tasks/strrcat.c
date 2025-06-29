#include <stdio.h>

int main(){
    char hi[] = "hello";
    char hi2[] = "world";

    int size_1 = sizeof(hi);
    int size_2 = sizeof(hi2);

    int total_size = (size_1 + size_2)-2;

    printf("%d \n",total_size);
    char output[total_size];

    int k=0;
    for(int i=0;i<size_1;i++,k++){
        output[k] = hi[i];
    }

    for(int i=0;i<size_1;i++,k++){
        output[k] = hi2[i];
    }

    for(int i=0;i<=total_size;i++){
        printf("%c",output[i]);
    }
    printf("\n");
}