#include <stdio.h>
#include <stdlib.h>

int strrlen(char str[]){
    int count =0;
    while(*(str+count) != '\0'){ count++;}
    return count;
 }

char* strrcat(char *str,char *str2){

    int size1 = strrlen(str);
    int size2 = strrlen(str2);
    char* hi = (char*) malloc(size1 + size2);

    int i=0;
    while(*(str+i) != '\0'){
        *(hi+i) = *(str+i);
        i++;
    }

    *(hi+i+1) = '-';

    int j=0;
    while(*(str2+j) != '\0'){
        *(hi+i) = *(str2+j);
        j++;
        i++;
    }

    *(hi+i) = '\0';
    return hi;
}


int main(){
    char str1[] = "hi";
    char str2[] = "madam";

    char *output = strrcat(str1,str2);

    printf("%s",output);
}