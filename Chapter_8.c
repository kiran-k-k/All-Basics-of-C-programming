//String

/*
//create a string to store firstName and lastName of user and print all the characters using the loop
#include<stdio.h>
void printstring(char arr[]);
int main()
{
    char firstName[] = "kiran", lastName[] = "Kendre";

    printstring(firstName);
    printstring(lastName);

    return 0;
}

void printstring(char arr[])
{
    for(int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}
*/

/*
//write a program to enter users fullname and print it
#include<stdio.h>
int main()
{
    char username[100];

    printf("enter your name :");
    fgets(username, 100, stdin);//you can use gets(username) also but it is unsafe

    printf("your name is : %s",username);

    return 0;
}
*/

/*
//string using pointer
#include<stdio.h>
int main()
{
    char *name = "kiran";//you can change reinitialize in pointer string
    puts(name);

    name = "kiran kishanrao kendre";
    puts(name);

    char Name[] = "kiran";//you cant change reinitialize in array string
    puts(Name);

    return 0;
}
*/

/*
//write a program that inputs users name and print its length
#include<stdio.h>
#include<string.h>
int print_length(char arr[]);
int main()
{
    char name[50] = "kiran";

    fgets(name, 50, stdin);

    name[strcspn(name, "\n")] = '\0';//Remove the newline character added by fgets

    printf("length of name %s is : %d", name, print_length(name));//without special function

    int length;

    length = strlen(name);

    printf("\nlength of name %s is : %d", name, length);

    return 0;
}

int print_length(char arr[])
{
    int i, count = 0;

    for(i = 0; arr[i] != '\0'; i++)
        count++;
    
    return count;
}
*/

/*
//write a program to take input from user using %c
#include<stdio.h>
int main()
{
    char str[100], ch;
    int i = 0;

    while(ch != '\n')
    {
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';

    puts(str);

    return 0;
}
*/

/*
//salting question you can search for more information
//take a password from user and add the salt "123" at the end of password
#include<stdio.h>
#include<string.h>
void addsalt(char password[]);
int main()
{
    char password[100];
    
    scanf("%s", password);

    addsalt(password);

    return 0;
}

void addsalt(char password[])
{
    char salt[] = "123";
    char newpassword[200];

    strcpy(newpassword, password);
    strcat(newpassword, salt);

    puts(newpassword);
}
*/

/*
//write a function slice which take a string and returns a sliced string from index N to M
#include<stdio.h>
void slice(char string[], int N, int M);
int main()
{
    char string[] = "helloworld";

    slice(string, 3, 6);

    return 0;
}

void slice(char string[], int N, int M)
{
    char newstring[100];
    int i, j = 0; 
    for(i = N; i <= M; i++, j++)
        newstring[j] = string[i];

    newstring[j] = '\0';

    puts(newstring);  
}
*/

/*
//write a function to count the occurance of vovels in a string
#include<stdio.h>
int count(char string[]);
int main()
{
    char string[100];
    
    fgets(string, 100, stdin);

    count(string);
    
    printf("vovel count : %d\n", count(string));

    return 0;
}

int count(char string[])
{
    int i, count = 0;

    for(i = 0; string[i] != '\0'; i++)
    {
        if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
            count ++;
    }

    return count;
}
*/