#include <stdio.h>

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

// version iterative
void insertionSortIt(int t[], int n){
    int i,k,x;

    for (i = 1 ; i<n;i++){

        x = t[i];
        k = i - 1;

        while ((t[k]>t[i]) && (k>=0)){
            t[k+1] = t[k];
            k--;
        }

        t[k+1] = x;

    }
}

// version recurssive

void insertionSortRec(int t[], int i,int n){
    int k,x;

    if(i<n){

        x = t[i];
        k = i - 1;

        while ((t[k]>t[i]) && (k>=0)){
            t[k+1] = t[k];
            k--;
        }

        t[k+1] = x;
        insertionSortRec(t,i+1,n);

    }
    
}


int main(){

    int t[100],n;
    printf("enter size of t: ");
    scanf("%d",&n);

    readArray(t,n);
    printArray(t,n);

    printf("\nprocedure iterative trie insertion\n");
    
    insertionSortIt(t,n);
    printArray(t,n);

    printf("\nprocedure iterative trie recurssive\n");
    insertionSortRec(t,0,n);
    printArray(t,n);
    return 0;
}