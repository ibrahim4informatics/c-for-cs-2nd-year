#include <stdio.h>


// [1,2,5]

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



void partioneur(int t[], int g, int d, int *k)
{
    int i, j, pivot, x;
    pivot = t[d];
    i = g;

    for (j = g; j < d; j++)
    {
        if (t[j] < pivot)
        {
            x = t[j];
            t[j] = t[i];
            t[i] = x;
            i++;
        }
    }

    x = t[i];
    t[i] = pivot;
    t[d] = x;
    *k = i;
}


void quickSort(int t[], int g, int d){

    if(g<d){
        int k;
        partioneur(t,g,d,&k);
        quickSort(t,g,k-1);
        quickSort(t,k+1,d);
    }

}

int main()
{
    int t[100], n;
    printf("enter size of t: ");
    scanf("%d", &n);
    readArray(t,n);
    printArray(t,n);
    quickSort(t,0,n-1);
    printArray(t,n);

    return 0;
}