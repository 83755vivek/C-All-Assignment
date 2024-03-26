

//Write a program to accept marks of five subjects, calculate its total and average.

#include<stdio.h>

int main() 
{
    int i;
    int arr[5];
    printf("Enter marks\n");
    
    for(i = 0; i < 5; ++i) 
	{
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int total = 0;
    for(i = 0; i < 5; ++i) 
	{
        total += arr[i];
    }

    float avg = (float)total / 5;
    printf("Total marks in all subjects = %d\n", total);
    printf("Average of five subject marks = %.2f\n", avg);
    
    return 0;
}

