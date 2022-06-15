#include <stdio.h>

void sort(int array[], int size)
{
    int i;
    int j;
    
    for(i = 0; i < size - 1; i++)
    {
    for (j = 0; j < size - 1; j++)
     {
        if (array[j] > array[j+1])
        {
            int temp;
            temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
        }
     }
    }
}

void printArray(int array[], int size)
        {
            int i;
            for (i = 0; i < size; i++ )
            printf("%d ", array[i]);
        }


int main() 
{
   int array[] = {3,8,5,4,9,2,6,1,0,7};
   int size = sizeof(array) / sizeof(array[0]);
   sort(array, size);
   printArray(array, size);
    return 0;
}
