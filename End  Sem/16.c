#include <stdio.h>
#define SIZE 11

int findMax(int a[])
{
    int i, max = 0;
    for (i = 1; i < SIZE; i++)
        if (a[i] > a[max])
            max = i;
    return max;
}

void printArray(int a[])
{
    int i, maxIndex;
    for (i = 1; i < SIZE; i++)
    {
        maxIndex = findMax(a);
        if (a[maxIndex] != 0)
        {
            printf("%d : %d\n", maxIndex, a[maxIndex]);
            a[maxIndex] = 0;
        }
    }
}

int main()
{

    int n, a[SIZE] = {0}, input, i;
    printf("Enter no of elements you want to input: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &input);
        a[input]++;
    }

    printArray(a);

    return 0;
}