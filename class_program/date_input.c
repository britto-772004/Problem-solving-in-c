#include <stdio.h>
int main(){
    int day,month,year;
    scanf("%d%*[/-] %d%*[/-] %d",&day,&month,&year);
    printf("%d/%d/%d\n",day,month,year);
}