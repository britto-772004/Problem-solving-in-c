#include <stdio.h>

void swap(char *ch1,char *ch2){
    *ch1 = *ch1 ^ *ch2;
    *ch2 = *ch1 ^ *ch2;
    *ch1 = *ch1 ^ *ch2;
}

void trimString(char str[]){

    int i=0;
    int j=0;
    while(str[i] != '\0' ){
        if(str[i] == 32){
            i++;
        }
        else{
            swap(&str[j],&str[i]);
            j++;
            i++;
        }
    }

    printf("%s\n",str);
}

int main(){
    char arr[] = "  hi";

    char hi[5];

    int i=0;
    while(arr[i] == 32 ){
        i++;
    }

    int j=i;
    int k=0;
    while(arr[j] != '\0'){
        hi[k] = arr[j];
        k++;
        j++;
    }
    printf("%s\n",arr);
    printf("%s\n",hi);
    trimString(arr);
}