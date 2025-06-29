#include <stdio.h>
#include <stdbool.h>


struct Student{
    char name[20];
    int rollno;
    int bookid;
    char bookname[50];
};

struct Book{
    char bookname[50];
    int bookid;
};

// search book by its id
int search_book(int array[],int size,int bookid){
    for(int i=0;i<size;i++){
        if(array[i] == bookid ){
            return 0;
        }
    }
    return 1;
}

void displaybook(){
    FILE *fp;

    char line[20];

    fp = fopen("book.txt","r");

    if(fp == NULL){
        printf("File not found");
    }

    while(fgets(line,sizeof(line),fp)){
        printf("%s",line);
    }

    fclose(fp);
    
}

void displaystudentlist(){
    FILE *fp;

    char line[20];

    fp = fopen("students.txt","r");

    if(fp == NULL){
        printf("File not found");
    }

    while(fgets(line,sizeof(line),fp)){
        printf("%s",line);
    }

    fclose(fp);
    
}

//save students to the students.txt file 

void savestudent_details(){

}

int main(){

    //book array by id

    struct Book b1 = {"Maths",100};
    struct Book b2 = {"Science",101};
    struct Book b3 = {"Social",102};

    

    struct Student s1 = {"Britto",31,100,"Maths"};
    struct Student s2 = {"John",1,101,"Science"};
    struct Student s3 = {"Michael",2,102,"Social"};


    // student array - roll no 
    char studentarray[3] = {31,1,2};
    int size_studentarray = sizeof(studentarray)/sizeof(studentarray[0]);

    // book array - bookid
    int bookarray[3] = {100,101,102}; 
    int size_bookarray = sizeof(bookarray)/sizeof(bookarray[0]);

    
    bool flag = true;
    while(flag){
            
        printf("Library \n");
        printf("1. Search book \n 2. Display books \n 3. Display the students and their taken books list \n 4. search student rollno \n 5. Quit\n");
        int option;
        printf("Enter your choice : ");
        scanf("%d",&option);
        switch(option){
            //search book
            case 1:
                printf("Enter the Book Id : ");
                int bookid;
                scanf("%d",&bookid);
                if(search_book(bookarray,size_bookarray,bookid)== 0){
                    printf("Your book is available \n");
                }
                else{
                    printf("Your book is not available\n");
                }
                break;
            
            
            // display books in book.txt
            case 2:

                printf("Books in the library : \n ");
                displaybook();
                break;

            // display the students in students.txt
            case 3:
                printf("Students details : \n");
                displaystudentlist();
                break;

            // search student by rollno 
            case 4:
                printf("Enter the student rollno : ");
                int rollno;
                scanf("%d",&rollno);
                break;

            //quit 
            case 5:
                flag = false;
                printf("Thankyou !!\n");
                break;

            // invalid input 

            default:
                printf("Invalid input ..\n");
                break;


        }
    }

}