#include <stdio.h>

int main(){
    printf("Enter the character : ");
    char value;
    scanf("%c",&value);
    int asci_value = (int) value;
    asci_value >=65 && asci_value <=122 ? printf("Yes it is character\n") : asci_value >=48 && asci_value <=57 ? printf("It is digit between 0 - 9 \n") : printf("It is not a character and also not a number \n"); 
    return 0;
}