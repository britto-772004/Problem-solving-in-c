#include <stdio.h>

int main(){

    FILE *fp ;

    fp = fopen("example.txt","a");

    if(fp == NULL){
        printf("File not opened \n");
        return 0;
    }

    fprintf(fp,"hi");
    fclose(fp);
}