#include <stdio.h>

int main(){
    int a,b,c;

    printf("To find the discriminent value for the quadratic equation \n");
    printf("Enter the A value : ");
    scanf("%d",&a);
    printf("Enter the B value : ");
    scanf("%d",&b);
    printf("Enter the C value : ");
    scanf("%d",&c);

    // b2 - 4ac 

    int result ;

    result = (b *b) - (4 *a *c);
    printf("Result : %d\n",result);
    return 0;
}