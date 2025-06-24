#include <stdio.h>
int main(){
    int angle;
    printf("Enter the angle of the triangle : ");
    scanf("%d",&angle);
    
    if (angle > 0 && angle<90){
        printf("This is the acute triangle\n");
    }
    else if(angle > 90 ){
        printf("This is the obuse angle triangle\n");
    }
    else{
        printf("This is the right angle triangle\n");
    }

    return 0;
}