#include <stdio.h>

int main(){
    printf("Enter the character : ");
    char value;
    scanf("%c",&value);
    int asci_value = (int) value;
    asci_value >=65 && asci_value <=122 ? printf("Yes it is character\n") : printf("No it is not character\n");
    return 0;
}