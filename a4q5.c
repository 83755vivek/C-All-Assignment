/*5. Write a function to print a given character for a given number of times.*/


#include<stdio.h>

// Function declaration
void print(int num, char ch);

int main() 
{
    int num;
    char ch;
    printf("Enter a number and character : ");
    scanf("%d %c", &num, &ch);

    // Call the print function
    print(num, ch);

    return 0;
}

// Function definition
void print(int num, char ch) 
{
    int i;
    for(i = 0; i < num; ++i) 
	{
        printf("%c\t", ch);
    }
}

