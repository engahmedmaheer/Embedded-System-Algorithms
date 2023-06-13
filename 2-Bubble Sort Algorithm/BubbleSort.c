#include <stdio.h>

void BubbleSort(int *Arr, int size);
int flag = 0;
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
    BubbleSort(arr, 5);
    printf("Element After Bubbled Algorithm \n");
    for (int i = 0; i < size; i++)
    {
        /* code */
        printf("Element Number %d = %d \n", i, arr[i]);
    }
    printf("==========Bubbled Done=========\n");
}

void BubbleSort(int *Arr, int size)
{
    /*Loop For Pass Sequane */
    for (int i = 0; i < size - 1; i++)
    {
        flag = 0;
        /*Comparison & swapping */
        for (int j = 0; j < size - 1 - i; j++)
        {
            /*check smallest element */
            if (Arr[j] > Arr[j + 1])
            {
                /*Swap*/
                Arr[j] = Arr[j] ^ Arr[j + 1];
                Arr[j + 1] = Arr[j] ^ Arr[j + 1];
                Arr[j] = Arr[j] ^ Arr[j + 1];
                flag++;
            }
        }
        if (flag == 0)
        {

            /*array is sorted no need to complete*/
            break;
        }
    }
}
