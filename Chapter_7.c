//Arrays

/*
// In an array of numbers, find how many times doesa number 'x' occurs.
#include<stdio.h>
int main()
{
    int num, count = 0, i, array[22] = {0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9};

    printf("array : ");
    for(i = 0; i < 20; i++)
    {
        printf("%d ",array[i]);
    }
    
    printf("\nenter number :");
    scanf("%d", &num);

    for(i = 0; i < 20; i++)
    {
        if(num == array[i])
            count++;
    }

    printf("number %d comes %d times \n", num, count);

    return 0;
}
*/

/*
//Write a program to print the largest number in an array.
#include<stdio.h>
int main()
{
    int largest, i, array[20];

    printf("enter 10 numbers :");
    for(i = 0; i < 10; i++)
        scanf("%d", &array[i]);

    largest = array[0];

    for(i = 0; i < 10; i++)
    {
        if(largest < array[i])
            largest = array[i];
    }

    printf("largest number from given array is : %d\n", largest);

    return 0;
}
*/

/*
//write a C program to insert an element at the end of an array:
#include <stdio.h>
int main() {

    int arr[100]; 
    int n, element, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
        scanf("%d", &arr[i]);

    printf("Enter the element to insert at the end: ");
    scanf("%d", &element);

    arr[n] = element;
    n++; 

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) 
        printf("%d ", arr[i]);

    return 0;
}
*/

/*
//write a program to enter price of three items and print their final cost with GST
#include<stdio.h>
int main()
{
    int i, price[3];
    float final_price = 0.0;

    printf("enter prices of item :");
    for(i = 0; i < 3; i++)
        scanf("%d", &price[i]);

    for(i = 0; i < 3; i++)
        final_price += (price[i] + (price[i] * 0.18));

    printf("Final price : %.2f", final_price);

    return 0;
}
*/

/*
//write a function to recive an array
#include<stdio.h>
void print(int arr[], int size); //here no need to define a size of array and you can replace arr[] with *arr
int main()
{
    int arr[5] = {1, 2, 3, 4, 5}, size;

    size = sizeof(arr) / sizeof(arr[0]);

    print(arr, size);

    return 0;
}

void print(int arr[], int size) 
{
    int i;

    for(i = 0; i < size; i++)
        printf("%d \t", arr[i]);

}
*/

/*
//write a function to reverse an array
#include<stdio.h>
void reverse(int *arr, int size);
int main()
{
    int arr[5] = {1, 2, 3, 4, 5}, size, i;

    size = sizeof(arr) / sizeof(arr[0]);

    reverse(arr, size);

    for(i = 0; i < size; i++)
        printf("%d \t", arr[i]);
}

void reverse(int *arr, int size)
{
    int temp, i;
    for( i = 0; i < (size / 2); i++)
    {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}
*/

/*
//write a program to store first N fibonachi number
#include<stdio.h>
int main()
{
    int num, i;

    printf("enter fibonachi Nth term ( num > 2):");
    scanf("%d", &num);

    int arr[num];

    arr[0] = 0;
    arr[1] = 1;

    for(i = 2; i < num; i++)
        arr[i] = arr[i - 1] + arr[i - 2];

    for(i = 0; i < num; i++)
        printf("%d ",arr[i]);

    return 0;
}
*/

/*
//create a 2D array and store table of 2 & 3;
#include<stdio.h>
int main()
{
    int i, j, arr[2][10];

    for(i = 0; i < 10; i++)
    {
        arr[0][i] = 2 * (i + 1);
        arr[1][i] = 3 * (i + 1);
    }

    printf("table opf 2 and 3 :");

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 10; j++)
            printf("%d ", arr[i][j]);

        printf("\n");
    }
}
*/