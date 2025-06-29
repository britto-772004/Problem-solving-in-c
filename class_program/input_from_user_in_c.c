#include <stdio.h>

int main(){

    FILE *fp;

    fp = fopen("data.txt","w");

    printf("Enter your name : ");
    char name[20];
    scanf("%s",&name);
    // printf("%s\n",name);

    printf("Enter your age : ");
    int age;
    scanf("%d",&age);

    fprintf(fp,"Name : %s , Age : %d\n",name,age);
}