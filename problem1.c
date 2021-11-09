#include <stdio.h>

void display_minmax(int, int []);

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

    display_minmax(n, arr);

    return 0;
}

void display_minmax(int n, int arr[])
{
    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Min: %d\nMax: %d\n", min, max);
}