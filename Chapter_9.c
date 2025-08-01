//Structure


//wqrite a program to store data of three students
#include<stdio.h>
#include<string.h>
struct students{
    int roll_no;
    char name[100];
    float CGPA;
};

int main()
{
    struct students s1;

    s1.roll_no = 1;
    strcpy(s1.name, "Kiran");
    s1.CGPA = 7.1;

    printf("student 1 \nname : %s \nRoll No : %d \nCGPA : %f",s1.name, s1.roll_no, s1.CGPA);

    struct students s2;

    s2.roll_no = 2;
    strcpy(s2.name, "Deepak");
    s2.CGPA = 8.2;

    printf("\nstudent 1 \nname : %s \nRoll No : %d \nCGPA : %f",s2.name, s2.roll_no, s2.CGPA);

    struct students s3;

    s3.roll_no = 3;
    strcpy(s3.name, "Hrishikesh");
    s3.CGPA = 7.8;

    printf("\nstudent 1 \nname : %s \nRoll No : %d \nCGPA : %f",s3.name, s3.roll_no, s3.CGPA);

    return 0;
}