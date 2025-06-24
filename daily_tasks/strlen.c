#include <stdio.h>

int strrlen(char str[]){
   int count =0;
   while(*(str+count) != '\0'){ count++;}
   return count;
}


int main(){
    char hi[] = "hi madam";
    int output = strrlen(hi);

    printf("%d \n",output);
}