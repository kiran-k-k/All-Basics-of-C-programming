//Structure

/*
//initializing structure
#include<stdio.h>
#include<string.h>
struct students{
    int roll_no;
    char name[100];
    float CGPA;
};

int main()
{
    struct students s1 = {1, "Kiran", 7.1};

    printf("student 1 \nname : %s \nRoll No : %d \nCGPA : %f",s1.name, s1.roll_no, s1.CGPA);

    struct students s2 = {2, "Deepak", 8.2};

    printf("\nstudent 2 \nname : %s \nRoll No : %d \nCGPA : %f",s2.name, s2.roll_no, s2.CGPA);

    return 0;
}
*/

/*
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
*/

/*
//array of structure
#include<stdio.h>
#include<string.h>
struct students{
    char name[50];
    int roll_no;
    float cgpa;
};
int main()
{
    struct students s[3];

    strcpy(s[0].name, "Kiran");
    s[0].roll_no = 14;
    s[0].cgpa = 7.1;

    strcpy(s[1].name, "Deepak");
    s[1].roll_no = 42;
    s[1].cgpa = 7.7;

    strcpy(s[2].name, "Siddharth");
    s[2].roll_no = 41;
    s[2].cgpa = 7.5;

    printf("\ninformaton of student 1 :");
    printf("\nNmae : %s \nRoll No : %d \nCGPA : %f",s[0].name, s[0].roll_no, s[0].cgpa);

    printf("\ninformaton of student 2 :");
    printf("\nNmae : %s \nRoll No : %d \nCGPA : %f",s[1].name, s[1].roll_no, s[1].cgpa);

    printf("\ninformaton of student 3 :");
    printf("\nNmae : %s \nRoll No : %d \nCGPA : %f\n",s[2].name, s[2].roll_no, s[2].cgpa);

    return 0;
}
*/

/*
//structure using pointers
#include<stdio.h>
#include<string.h>
struct employes{
    char name[100];
    int e_num;
    int salary;
};
int main()
{
    struct employes E1;
    struct employes *ptr;//declaration of pointer

    ptr = &E1;//assigning the address of E1 to pointer variable

    strcpy((*ptr).name, "Kiran");//we must want to use () to show the pointer is only for ptr not for ptr.name
    E1.e_num = 10;//we store the value using struct variable
    (*ptr).salary = 100000;

    printf("name : %s \nemploye number : %d \nemploye salary : %d \n",
        (*ptr).name, (*ptr).e_num, (*ptr).salary); //here we tacking the values using pointer variable

    return 0;
}
*/

/*
//structure pointer using arrow operator
#include<stdio.h>
#include<string.h>
struct employes{
    char name[100];
    int e_num;
    int salary;
};
int main()
{
    struct employes E1;
    struct employes *ptr;

    ptr = &E1;

    strcpy(ptr->name, "Kiran");//the -> points the variable exist in structure 
    ptr->e_num = 10;
    ptr->salary = 100000;

    printf("name : %s \nemploye number : %d \nemploye salary : %d \n",
        ptr->name, ptr->e_num, ptr->salary);

    return 0;
}
*/

/*
//passing structure to function
#include<stdio.h>
#include<string.h>
struct employes{
    char name[100];
    int e_num;
    int salary;
};
void printinfo(struct employes E);
int main()
{
    struct employes E1;

    strcpy(E1.name, "Kiran");//the -> points the variable exist in structure 
    E1.e_num = 10;
    E1.salary = 100000;

    printinfo(E1);

    return 0;
}

void printinfo(struct employes E)
{
    printf("name : %s \nemploye number : %d \nemploye salary : %d \n",
        E.name, E.e_num, E.salary);
}
*/

/*
//write a program which take address of 5 peoples which include Name, House_No, Block, City, and State
//in this program we also use typedef
#include<stdio.h>
typedef struct address { //using typedef there is no need to write full structure name address we just use ad
    char name[50];
    int house_no;
    char block;
    char city[20];
    char state[20];
} ad; //you can use anything on the place of ad like a, addr, p, etc
int main()
{
    ad people[5];

    for(int i = 0; i < 5; i++){
    printf("\nEnter address of %d people :", i + 1);
    printf("Name :");
    scanf("%s", people[i].name);
    printf("House No :");
    scanf("%d", &people[i].house_no);
    printf("Block :");
    scanf(" %c", &people[i].block);
    printf("City :");
    scanf("%s", people[i].city);
    printf("State :");
    scanf("%s", people[i].state);
    }

    for(int i = 0; i < 5; i++){
    printf("\nInformation of 1 person :");
    printf("\nName : %s",people[0].name);
    printf("\nHouse No : %d",people[0].house_no);
    printf("\nBlock : %c",people[0].block);
    printf("\nCity : %s", people[0].city);
    printf("\nState : %s", people[0].state);
    }

    return 0;
}
*/
