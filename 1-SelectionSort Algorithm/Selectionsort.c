#include <stdio.h>

void SelectionSort(int *Arr, int n);
int smallestindex = 0;
void main()
{

    int size;
    printf("enter size of array \n");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d element ", i + 1);
        scanf("%d", &arr[i]);
    }
    SelectionSort(arr, 5);
    printf("Element After Sorted Algorithm \n");
    for (int i = 0; i < size; i++)
    {
        /* code */

        printf("Element Number %d = %d \n", i, arr[i]);
    }
}

void SelectionSort(int *Arr, int size)
{
    /*Loop For Pass Sequane */
    for (int i = 0; i < size - 1; i++)
    {
        /*Update Mini Index With Counter Value */
        smallestindex = i;
        /*Find Smallest Number */
        for (int j = i + 1; j < size; j++)
        {
            /*check smallest element */
            if (Arr[smallestindex] > Arr[j])
            {
                /*Swap*/
                smallestindex = j;
            }
        }
        /*Check if there is a smaller element than the current element */
        if (smallestindex != i)
        {
            /*So the loop find number small*/
            /*Swap */
            Arr[smallestindex] = Arr[smallestindex] ^ Arr[i];
            Arr[i] = Arr[smallestindex] ^ Arr[i];
            Arr[smallestindex] = Arr[smallestindex] ^ Arr[i];
        }
    }
}
