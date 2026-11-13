#include <stdio.h>

void print_array(int a[], int arraysize)
{
    for (int i = 0; i < arraysize; i++)
    {
        printf("%d\n", b[i])
    }
}

int main()
{
    int a[] = {10, 20, 30, 40, 50, 60};
    int arraysize = sizeof(a) / sizeof(int);
    print_array(a);

    return 0;
}