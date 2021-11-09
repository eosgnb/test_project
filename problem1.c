#include <stdio.h>

// Function prototypes
int get_minimum(int, int []);
int get_maximum(int, int []);

int main(void)
{
    int n;

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Input %d elements in the array: \n", n);

    for (int i = 0; i < n; i++)
    {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);
    }

    int max = get_maximum(n, arr);
    printf("Maximum element: %d\n", max);

    int min = get_minimum(n, arr);
    printf("Minimum element: %d\n", min);

    return 0;
}

int get_maximum(int n, int arr[])
{
    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    
    return max;
}

int get_minimum(int n, int arr[])
{
    int min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    
    return min;
}