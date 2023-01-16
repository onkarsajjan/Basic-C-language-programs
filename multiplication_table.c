#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Multiplication table of %d:\n ", n);
    printf("--------------------------\n");
    for (i = 1; i <= 10; i++)
        printf("%d x %d = %lu\n", n, i, (unsigned long)(n * i));
    return 0;
}