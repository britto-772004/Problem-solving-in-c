#include <stdio.h>

int arraylength(char arr[]){
    int i=0;
    while(arr[i] != '\0'){
        i++;
    }
    return i-1;
}

void palindrome(char arr[]){
    int i =0 ;
    int j = arraylength(arr);
    int flag = 0;
    for(i,j;i<=j;i++,j--){
        if(arr[i] != arr[j]){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        printf("It is not palindrome\n ");
    }
    else{
        printf("It is palindrome\n");
    }

}
int main(){
    char hi[]="sls";
    printf("%d",sizeof(hi));
    palindrome(hi);
}