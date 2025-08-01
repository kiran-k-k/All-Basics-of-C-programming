//Function and Recursion

/*
//Write a function to print table of number N
#include<stdio.h>
void print_table(int);
int main()
{
    int num;

    printf("Enter number :");
    scanf("%d", &num);

    print_table(num);

    return 0;
}

void print_table(int num)
{
    for(int i = 1; i <= 10; i++)
    {
        printf("%d \n", num * i);
    }
}
*/

/*
//Write a function to find factorial of digits of a number.
#include<stdio.h>
int factorial_digit(int);
int main()
{
    int num, factorial;

    printf("enter number :");
    scanf("%d", &num);

    factorial = factorial_digit(num);

    printf("the factorial of digit is :%d\n", factorial);

    return 0;
}

int factorial_digit(int num)
{
    int factorial = 0, temp;

    while(num != 0)
    {
        temp = num % 10;
        factorial += temp;
        num /= 10;
    }

    return (factorial);
}
*/

/*
//Write a function to find squareroot of a number.
#include<stdio.h>
#include<math.h>
float squareroot(int);
int main()
{
    int num;

    printf("enter the number :");
    scanf("%d", &num);

    printf("squareroot if %d is %.2f\n", num, squareroot(num)); //%.2f represent the digit after dot

    return 0;
}

float squareroot(int num)
{
    return (sqrt(num));//sqrt if function of math.h
    //return (pow(num, 0.5));
}
*/

/*
//Write a function to print "Hot" or "Cold" dependingon the temperature user enters.
#include<stdio.h>
void cold();
void hot();
void normal();
int main()
{
    float temperature;

    printf("enter temperature in °C :");
    scanf("%f", &temperature);

    if(temperature <= 20.00)
        cold();
    else if(20.00 < temperature && temperature <= 30.00)
        normal();
    else
        hot();

    return 0;
}

void cold()
{
    printf("Temperature is Cold\n");
}

void normal()
{
    printf("Temperature is Normal\n");
}

void hot()
{
    printf("Temperature is Hot\n");
}
*/

/*
//print N time Hello World using recursion 
#include<stdio.h>
void print(int);
int main()
{
    int num;

    printf("enter number :");
    scanf("%d", &num);

    print(num);

    return 0;
}

void print(int num)
{
    if(num == 0)
        return;
    
    printf("Hello World\n");
    print(num - 1);
}
*/

/*
//weite a program to print factorial of first N numbers using recursion
#include<stdio.h>
int factorial(int);
int main()
{
    int num;

    printf("enter number :");
    scanf("%d", &num);

    printf("the factorial is : %d\n", factorial(num));

    return 0;
}

int factorial(int num)
{
    if(num == 1)
        return 1;
    
    return (num + factorial(num - 1));
}
*/

/*
//weite a program to print factorial of N numbers using recursion
#include<stdio.h>
int factorial(int);
int main()
{
    int num;

    printf("enter number :");
    scanf("%d", &num);

    printf("the factorial is : %d\n", factorial(num));

    return 0;
}

int factorial(int num)
{
    if(num == 1)
        return 1;
    
    return (num * factorial(num - 1));
}
*/

/*
//write a program to print fibonachi sequence
#include<stdio.h>
int main()
{
    int num, num_1 = 0, num_2 = 1, sum;

    printf("enter number :");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++)
    {
        sum = num_1 + num_2;
        printf("%d ", sum);

        num_1 = num_2;
        num_2 =  sum;
    }

    return 0;
}
*/