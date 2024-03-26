

//Write a program to accept two numbers and find its GCD (greatest common divisor) using Euclidean algorithm.
#include <stdio.h>

int main(void)
{
    int num1, num2, temp;


    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);


    if(num1 < num2)
	{
       temp = num1;
       num1 = num2;
       num2 = temp;
    }

    // Finding GCD using Euclidean algorithm
    while (num2 != 0)
	{
        temp = num2;
        num2 = num1 % temp;
        num1 = temp;
    }

    printf("GCD of %d and %d is: %d \n",num1,temp,num1);
    return 0;
}
