#include <stdio.h>

int main(){
    printf("Case conversion \n");
    printf("Enter the character : ");
    char value;
    scanf("%c",&value);
    int asciivalue = value;
    if (65 <= asciivalue && asciivalue <=96 ){
        asciivalue += 32;
        printf("Case conversion  for the %c is %c\n",value,asciivalue);
    }
    else{
        asciivalue -= 32;
        printf("Case conversion  for the %c is %c\n",value,asciivalue);
    }
    return 0;
}