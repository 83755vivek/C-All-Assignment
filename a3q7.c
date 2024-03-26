/*7. Write a program to accept a number and print unique pairs of numbers such that multiplication of
the pair is given number
Input: 24
Output:
1 * 24 = 24
2 * 12 = 24
3 * 8 = 24
4 * 6 = 24

*/




#include <stdio.h>

int main() 
	{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("multiplication of the pair is %d:\n", number);
    for (int i = 1; i <= number / 2; i++) 
	{
        if (number % i == 0) 
		{
            printf("%d * %d = %d\n", i, number / i, number);
        }
    }

    return 0;
}

