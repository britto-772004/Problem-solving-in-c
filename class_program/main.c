#include <stdio.h>
#define format 

int main(){
    // to take the values as a input from the input.txt file and store the output in the output.txt file
    #ifdef format
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int number;
    scanf("%d",&number);
    printf("%d",number);
    return 0;
}