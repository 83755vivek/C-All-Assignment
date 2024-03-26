/*2. Write a function to accept array elements from the user. Write another function to print array
elements. Re-use these functions in rest of the assignments wherever required.*/



#include <stdio.h>


void acceptArray(int arr[], int size) 
{
    printf("Enter %d array elements:\n", size);
    for (int i = 0; i < size; i++) 
	{
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}
void printArray(int arr[], int size) 
{
    printf("Array elements:\n");
    for (int i = 0; i < size; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() 
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    
    acceptArray(arr, size);

    
    printArray(arr, size);

    return 0;
}

