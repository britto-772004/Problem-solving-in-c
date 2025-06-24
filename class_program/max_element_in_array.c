#include <stdio.h>

void  second_max_element(int array[],int size){
    int max = max_element_in_array(array,size);
    printf("%d\n",max);
    int difference = 0 ;
    int temp;
    for(int i=0;i<size;i++){
        temp = max - array[i];
        if(temp < difference){
            difference = temp;
            printf("%d ",difference);
        }
    }

}


int max_element_in_array(int array[],int size){
    int max = array[0];
    for(int i=1;i<size;i++){
        if(max < array[i]){
            max = array[i];
        }
    }
    return max;
}

int main(){
    int array[] ={2,3,5,6};
    int size = sizeof(array)/sizeof(array[0]);
    second_max_element(array,size);
}