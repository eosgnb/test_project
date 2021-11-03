#include <stdio.h>

int get_square(int num)
{
    return num * num;
}

int main(void)
{
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    int square = get_square(num);
    printf("The square of %d is %d.\n", num, square);
}