// one dimensional arrays
#include<stdio.h>

int main()
{
    int arr[5], i;

    for(i = 1; i < 5; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nPrinting elements of the array: \n\n");

    for(i = 1; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

