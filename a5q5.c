/*5. Write a function to calculate maximum and minimum of the array elements.*/



#include <stdio.h>

void find_max_min(int arr[], int size, int *max, int *min) {
  
    *max = arr[0];
    *min = arr[0];

    
    for (int i = 1; i < size; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}

int main() {
    int arr[] = {5, 2, 7, 1, 8, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max, min;

    find_max_min(arr, size, &max, &min);

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}

