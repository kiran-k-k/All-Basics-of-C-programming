//Loop Controle Statments

/*
//Write a program to print table of N number using all loops
#include<stdio.h>
int main()
{
    int num, i;

    printf("Enter number :");
    scanf("%d", &num);

    //using for loop
    for(i = 1; i <= 10; i++)
    {
        printf("%d\n",num * i);
    }

    i = 1;
    //using while loop
    while(i <= 10)
    {
        printf("%d\n", num * i);
        i++;
    }

    i = 1;
    //using do-while loop
    do{
        printf("%d\n", num * i);
        i++;
    } while(i <= 10);

    return 0;
}
*/

/*
//print the sum of first N natural numbers
#include<stdio.h>
int main()
{
    int num, i, sum = 0;

    printf("enter the range :");
    scanf("%d", &num);

    for(i = 1; i <= num; i++)
    {
        sum += i;
    }

    printf("the sum of first %d natural number is %d", num, sum);

    return 0;
}
*/

/*
// print this pattern using 
//   ***** 
//   ***** 
//   ***** 
//   *****

#include<stdio.h>
int main()
{
    int i, j;

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
*/

/*
// Write a program to check if a number is prime or not.
#include<stdio.h>
int main()
{
    int num, i, temp = 1;

    printf("enter number : ");
    scanf("%d", &num);

    for(i = 2; i <= (num / 2); i++)
    {
        if(num % i == 0)
            temp = 0;
    }

    if(temp == 1 || num == 2)
        printf("number is prime");

    else 
        printf("number is not prime");

    return 0;
}
*/

/*
//Write a program to print prime numbers in a range.
#include<stdio.h>
int main()
{
    int i, j, temp = 1, from, to;

    printf("enter range in the form of from to : ");
    scanf("%d %d", &from, &to);

    if(from > to)
    {
        printf("enter proper range");
        return 0;
    }

    for(i = from; i <= to; i++)
    {
        for(j = 2; j <= (i / 2); j++)
        {
            if(i % j == 0)
                temp = 0;
        }

        if(temp == 1 || i == 2)
            printf("%d\n",i);
        
        temp = 1;
    }

    return 0;
}
*/

/*
//write a program which keep kacking numbers from users untill user will gives a odd number
#include<stdio.h>
int main()
{
    int num;

    while(1)
    {
        printf("\nenter number :");
        scanf("%d", &num);

        if(num %2 != 0)
        {
            break ;
        }
    }

    printf("entered number is odd number");

    return 0;
}
*/

/*
//write a program to print odd numbers between 5 to 50
#include<stdio.h>
int main()
{
    int i;

    for(i = 5; i <= 50; i++)
    {
        if(i % 2 == 0)
            continue;
        
        printf("%d \n", i);
    }

    return 0;
}
*/

/*
//write a program to print the factorial of number N
#include<stdio.h>
int main()
{
    int num, i, factorial = 1;

    printf("enter the number :");
    scanf("%d", &num);

    for(i = 1; i <= num; i++)
    {
        factorial *= i;
    }

    printf("factorial of number %d is : %d", num, factorial);

    return 0;
}
*/