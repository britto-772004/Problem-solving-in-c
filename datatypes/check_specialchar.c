#include <stdio.h>

int main(){
    printf("Enter the character : ");
    char value;
    scanf("%c",&value);
    int asci_value = (int) value;
    (asci_value >=33 && asci_value <=47 ) || (asci_value >=58 && asci_value<=64 ) || (asci_value >=91 && asci_value<=96) || (asci_value>= 123 && asci_value<= 126) ? printf("Yes it is special  character\n") : printf("No it is not special character\n");
    return 0;
}