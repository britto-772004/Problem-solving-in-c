#include <stdio.h>

int palindrome(char array[],int left,int right){
    if(left < right){
        if(array[left] != array[right]){
            return -1;
        }
        return palindrome(array,left+1,right-1);

    }
    return 0;
}

int main(){
    char str1[] ="mc";
    int size = sizeof(str1)/sizeof(str1[0]);
    int left = 0;
    int right = size -2;

    int output = palindrome(str1,left,right);
    if(output == 0){
        printf("It is palindrome \n");
    }
    else{
        printf("It is  not palindrome \n");
    }

}