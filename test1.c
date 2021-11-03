#include <stdio.h>

int get_square(int);
int is_even(int);

int main(void)
{
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    int square = get_square(num);
    printf("The square of %d is %d.\n", num, square);

    int check_num = is_even(num);
    if (check_num == 1)
    {
        printf("%d is even.\n", num);
    }
    else
    {
        printf("%d is odd.\n", num);
    }
}

int get_square(int num)
{
    return num * num;
}

int is_even(int num)
{
    if (num % 2 == 0)
        return 1;
    else
        return 0;
}