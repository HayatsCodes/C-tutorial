#include <stdio.h>

void sort(char array[], int size)
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

void printArray(char array[], int size)
        {
            int i;
            for (i = 0; i < size; i++ )
            printf("%c ", array[i]);
        }


int main() 
{
   char array[] = {'d','f','b','a','c','e'};
   int size = sizeof(array) / sizeof(array[0]);
   sort(array, size);
   printArray(array, size);
    return 0;
}
