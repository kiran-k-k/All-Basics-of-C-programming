// Coneditional Statments

/*
//Write a program to check if the given number is a natural number.
#include<stdio.h>
int main()
{
    int num;

    printf("enter number :");
    scanf("%d", &num);

    if(num >= 1)
        printf("number is natural\n");
    
    else
        printf("number is not natural\n");

    return 0;
}
*/

/*
//Write a program to find if a character entered by user is upper case or not
#include<stdio.h>
int main()
{
    char character;

    printf("enter character :");
    scanf("%c", &character);

    if(character >= 'A' && character <= 'Z')
        printf("Entered character is upper case");
    
    else
        printf("entered character is not upper case");

    return 0;
} 
*/

/*
//Write a program to check if a given number is Armstrong number or not.
#include<stdio.h>
#include<math.h>
int main()
{
    int num, d_1, d_2, d_3, temp; // it only for     

    printf("enter number :");
    scanf("%d", &num);

    if((num < 100) && (num > 999))
    {
        return 0;
    }

    d_1 = num / 100;
    d_2 = (num / 10) % 10;
    d_3 = num % 10;

    temp = pow(d_1, 3) + pow(d_2, 3) + pow(d_3, 3);

    if(num == temp)
        printf("number %d is Armstrong number", num);
    
    else
        printf("number %d is not Armstrong number", num);

    return 0;
}
*/