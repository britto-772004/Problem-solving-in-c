#include <stdio.h>
int main(){
    int n = 5;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(i%2 != 0){
                printf("%d",(j+1)*2);
            }
            else{
                
                printf("%d",(j*2)+1);
            }
        }
        printf("\n");
    }
    return 0;
}