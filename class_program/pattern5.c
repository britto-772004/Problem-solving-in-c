#include <stdio.h>
int main(){
    int value ;
    printf("Enter the value : ");
    scanf("%d",&value);
    int j =1;
    for(int i=1;i<=value;i++){
        for( j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}