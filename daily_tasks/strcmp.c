#include <stdio.h>
#include <stdbool.h>


int strrcmp(char array[],int size,char array2[],int size2){
    
    int org_size = size > size2 ? size : size2;
    int ascii1,ascii2;

    for(int i=0;i<org_size;i++){
        if (array[i] != array2[i]){
            ascii1 = array[i];
            ascii2 = array2[i];

            // ascii1 > ascii2 ? return 1 : return -1;

            if(ascii1 > ascii2){
                return 1;
            }
            else{
                return -1;
            }
            
        }
    }

    return 0;

}

int main(){
    char array1[] = "britto";
    char array2[] = "BRITTO";

    int size1 = sizeof(array1)/sizeof(array1[0]);
    int size2 = sizeof(array2)/sizeof(array2[0]);

    int output = strrcmp(array1,size1,array2,size2);
    printf("%d \n",output);
}