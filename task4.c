
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int multiply(int a, int b)
{
    return a * b;
}

int findMax(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int compute(int a, int b, int (*ptr)(int, int))
{
    return ptr(a, b);
}

int main()
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Sum = %d\n", compute(a, b, add));

    printf("Product = %d\n", compute(a, b, multiply));

    printf("Maximum = %d\n", compute(a, b, findMax));

    return 0;
}
