#include <stdio.h>

int main(){

    char hi[] = "Hi bro^^(@)";
    int size = sizeof(hi);
    printf("size : %d \n",size);
    printf("null element : %c \n",hi[size -2 ]);

    // for(int i=0;i<size -1;i++){
    //     printf("%c",hi[i]);
    // }
    // int i=0;
    // while(hi[i] != '\0'){
    //     printf("%c",hi[i]);
    //     i++;
    // }

    // for(int i=0; hi[i] != '\0';i++){
    //     printf("%c",hi[i]);
    // }
    printf("before \n");
    for(int i=0; hi[i] != '\0';i++){
        printf("%c",hi[i]);
    }

    int j=0;
    while(hi[j] != '\0'){
        if(hi[j] > 'A' && hi[j]< 'Z'){
            hi[j] = hi[j] + 32;
            j++;
        }
        else{
            j++;
        }
    }
    printf("\nAfter \n");

    for(int i=0; hi[i] != '\0';i++){
        printf("%c",hi[i]);
    }
    printf("\n");

}