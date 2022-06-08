// Program treba naci najveci i najmanji broj i ispisat ih zajedno s pozicijama u polju.

#include<stdio.h>

int main()
{

    int A[25], max, min, maxpos, minpos, n, i;

    printf("Unesi velicinu polja: ");
    scanf("%d", &n);
    printf("\nUnesi %d elemente polja: \n",n);
    for(i=1; i<=n; i++)
    {
     printf("\nUnesi %d element : ",i);
     scanf("%d", &A[i]);
    }
    max = A[1];
    maxpos = 1;
    for(i=1; i<=n; i++)
    {
    if(max<A[i])
    {
    max = A[i];
    maxpos = i;
    }
    }
    min = A[1];
    minpos = 1;
    for(i=1; i<=n; i++)
    {
    if(min>A[i])
    {
    min = A[i];
    minpos = i;
    }
    }
    printf("\nNajveci element je: %d ", max);
    printf(" na poziciji : %d \n", maxpos);
    printf("\nNajmanji element je : %d ", min);
    printf(" na poziciji : %d \n", minpos);
    return 0;
}
