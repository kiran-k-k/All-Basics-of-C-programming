//Pointers

/*
//Write a program in C to find the maximum number between two numbers using a pointe.
#include<stdio.h>
int main()
{
    int num_1, num_2;
    int *ptr_1, *ptr_2;

    ptr_1 = &num_1;
    ptr_2 = &num_2;

    printf("Enter number 1 :");
    scanf("%d",&num_1);
    printf("enter number 2 :");
    scanf("%d", &num_2);

    if(*ptr_1 > *ptr_2)
        printf("number 1 is maximum \n");

    else
        printf("number 2 is maximum \n");

    return 0;
}
*/

/*
//Write a program in C to print all the letters in english alphabet using a pointer.
#include<stdio.h>
int main()
{
    char alphabet = 'A';
    char *ptr;

    ptr = &alphabet;

    printf("Capital letters : ");

    while( *ptr <= 'Z')
    {
        printf("%c ", *ptr);

    (*ptr)++; // (*ptr)++ increments the value pointed by ptr
    }

    *ptr = 'a';
    printf("\nSmall letters : ");
    while( *ptr <= 'z')
    {
        printf("%c ", *ptr);

        alphabet++;
    }

    return 0;
}
*/

/*
//swap two numbers using call by reference
#include<stdio.h>
void swap(int *, int *);
int main()
{
    int num_1, num_2;

    printf("enter number 1 :");
    scanf("%d", &num_1);
    printf("enter number 2 :");
    scanf("%d", &num_2);

    printf("\nBefore Swap :\nnumber 1 : %d \nnumber 2 : %d", num_1, num_2);

    swap(&num_1, &num_2);

    printf("\nAfter Swap :\nnumber 1 : %d \nnumber 2 : %d", num_1, num_2);

    return 0;
}

void swap(int *num_1, int *num_2)
{
    *num_1 = *num_1 + *num_2;
    *num_2 = *num_1 - *num_2;
    *num_1 = *num_1 - *num_2;
}
*/

/*
//wriote a function to calculate sum, product, and average of two numbers and print that in main function
#include<stdio.h>
void calculate(int , int, int *,int *, float *);
int main()
{
    int num_1, num_2,sum, product;
    float average;
    
    printf("enter numbers :");
    scanf("%d %d", &num_1 ,&num_2);

    calculate(num_1, num_2, &sum, &product, &average);

    printf("\nsum : %d \nproduct : %d \naverage : %.2f\n", sum, product, average);

    return 0;
}

void calculate(int num_1, int num_2, int *sum,int *product, float *average)
{
    *sum = num_1 + num_2;
    *product = num_1 * num_2;
    *average = (num_1 + num_2) / 2.0;
}
*/