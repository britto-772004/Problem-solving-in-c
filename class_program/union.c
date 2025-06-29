#include <stdio.h>

union Student{
    char name[20];
    int rollno;
    int age;
};

int main(){
    union Student s1 = {"britto"};
    s1.rollno = 31;
    s1.rollno = 32;
    s1.age = 20;
    printf("%s, %d \n",s1.name,s1.rollno);
}