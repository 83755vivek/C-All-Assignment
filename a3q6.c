/*6. Write a program to accept a number and print all factors excluding the number
Input: 24
*/



#include<stdio.h>

int main()

{
int number;

	printf("Enter a number : ");
	scanf("%d", &number);

	printf("Factors of %d(excluding %d) : ", number, number);

	for(int i = 1 ; i <= number / 2 ; i++)
	{
	if(number % i == 0)
	{
	printf("%d", i);
	}

	}

	printf("\n");

return 0;


}




