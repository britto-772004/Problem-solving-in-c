#include <stdio.h>

struct Student{
    char name[20];
    int rollno;
};

int main(){
    struct Student s1 ={"britto",31};

    printf("%ld\n",sizeof(s1));
}