#include <stdio.h>

void swap(int *a, int *b){ 
    // by using bitwise operator
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *b ^ *a;
    printf("After swap : %d , %d \n",*a,*b);

}
int main(){
    int a = 1;
    int b = 2;
    printf("Before swap : %d , %d \n",a,b);
    swap(&a,&b);
}