#include <stdio.h>


int linear_search(int *a,int target){
    while(*a){
        if(*a == target){
            return *a;
        }
        a++;
    }
    return -1;
}
int main(){
    int arr[] = {1,2,3};
    int target = 2;
    printf("%d\n",linear_search(arr,target));
}