#include <stdio.h>

int update(int *num,int *num2){
    // *num = *num + *num2;
    return *num + *num2;
}

int main(){
    int hi =1;
    int hi1 = 2;
    // printf("%d\n",hi);
    printf("%d\n",update(&hi,&hi1));
    // printf("%d\n",hi);
}