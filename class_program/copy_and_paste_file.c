#include <stdio.h>

int main(){

    FILE *fp1;
    FILE *fp2;

    char line[50];

    fp1 = fopen("data.txt","r");
    fp2 = fopen("output.txt","w");

    if(fp1 == NULL){
        printf("File is already opened ..\n");
        return 1;
    }

    fgets(line,sizeof(line),fp1);

    fputs(line,fp2);

    fclose(fp1);
    fclose(fp2);



}