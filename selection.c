#include <stdio.h>

void selectionSortIt(int t[], int n)
{
    int i, j, k, x;
    for (i = 0; i < n; i++)
    {
        k = i;
        for (j = i + 1; j < n; j++)
        {
            if (t[j] < t[k])
            {
                k = j;
            }
        }

        x = t[i];
        t[i] = t[k];
        t[k] = x;
    }
}

void selectionSortRec(int t[], int i, int n)
{
    int j, k, x;

    if (i < n)
    {
        k = i;
        for (j = i + 1; j < n; j++)
        {
            if (t[j] < t[k])
            {
                k = j;
            }
        }

        x = t[i];
        t[i] = t[k];
        t[k] = x;
        selectionSortRec(t, i + 1, n);
    }
}

void readArray(int t[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter t[%d]= ", i);
        scanf("%d", &t[i]);
    }
}

void printArray(int t[], int n)
{
    int i;
    printf("[");
    for (i = 0; i < n; i++)
    {
        printf("%d, ", t[i]);
    }
    printf("]\n");
}

int main()
{

    int t[100], n;

    printf("enter the size of array: ");
    scanf("%d", &n);
    readArray(t, n);
    printArray(t, n);
    selectionSortIt(t, n);
    printArray(t, n);

    selectionSortRec(t, 0, n);
    printArray(t, n);

    return 0;
}