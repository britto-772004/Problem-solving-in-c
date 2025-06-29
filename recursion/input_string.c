#include <stdio.h>
#include <string.h>

int main(){
    char arr[20];

    printf("Enter the string : ");

    scanf("%s",&arr);

    int size = strlen(arr);

    for(int i=0;i<size;i++){
        printf("%c ",arr[i]);
    }
    printf("%s\n",arr);
}