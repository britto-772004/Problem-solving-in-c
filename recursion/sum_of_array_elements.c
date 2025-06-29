#include <stdio.h>

int sumofelementsinarray(int array[],int size){
    if(size == 0){
        return array[size];
    }
    else{
        return array[size] + sumofelementsinarray(array,size-1);
    }
}

int main(){
    int array[] = {1,2,3,4,5};
    int size = sizeof(array)/sizeof(array[0]);
    int sum = sumofelementsinarray(array,size-1);
    printf("%d \n",sum);

}