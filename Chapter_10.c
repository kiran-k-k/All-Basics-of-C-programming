//Dynamic memory allocation

/*
//malloc()
//write a program to allocate memoty to store 5 prices
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float *ptr;
    ptr = (float *) malloc(5 * sizeof(float));//here malloc function allocate 5 memory space to store the price 

    ptr[0] = 100;
    ptr[1] = 12.600;
    ptr[2] = 20.300;
    ptr[3] = 33;
    ptr[4] = 455.6;

    for(int i = 0; i < 5; i++)
    {
        printf("%f\n", ptr[i]);
    }

    return 0;
}
*/

/*
//calloc()
//write a program to allocatr memry of size N wherw n is entered by user
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int N;

    printf("entr value of N : ");
    scanf("%d", &N);

    ptr = (int *) calloc(N, sizeof(int));

    for(int i = 0; i < N; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}
*/

/*
//free()
//free the memory which allocated by calloc
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    
    ptr = (int *) calloc(5, sizeof(int));

    ptr[0] = 0;
    ptr[1] = 1;
    ptr[2] = 2;
    ptr[3] = 3;
    ptr[4] = 4;

    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }

    free(ptr);

    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}
*/

/*
//relloc()
//allocate memory to store first 5 even numbers, then rellocate it to store first 6 even numbers
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    
    ptr = (int *) calloc(5, sizeof(int));

    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;

    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }

    ptr = realloc(ptr, 6);

    ptr[0] = 0;
    ptr[1] = 2;
    ptr[2] = 4;
    ptr[3] = 6;
    ptr[4] = 8;
    ptr[5] = 10;


    for(int i = 0; i < 6; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}
*/