#include <stdio.h>
int main(){

    for(int i=0;i<10;i++){
        if(i == 3){
            
            goto hi;
            printf("jj");
        }
        else{
            printf("%d",i);
        }
    }

    hi :
        printf("hi bro\n");
        printf("bye bro\n");
        return 0;
}