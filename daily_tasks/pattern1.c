// output 

// 1  10  11  20  21 
// 2  9  12  19  22 
// 3  8  13  18  23 
// 4  7  14  17  24 
// 5  6  15  16  25 


#include <stdio.h>
int main(){
    int n=5;
    int k=2*n-1;
    int m = 1;

    for(int i=1;i<=n;i++){
        for(int j=i;j<=n*n;j+=0){
          if(i%2 != 0){
            if(j%2 != 0){
                printf(" %d ",j);
                j+=k;
            }
            else{
                printf(" %d ",j);
                j+=m;
            }
          }
          else{
            if(j%2 == 0){
                printf(" %d ",j);
                j+=k;
            }
            else{
                printf(" %d ",j);
                j+=m;
            }
            
          }
        }
        printf("\n");
        k-=2;
        m+=2;
    }
    return 0;
}