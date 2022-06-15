#include <stdio.h>
int main(){

int numbers[] = {34,56,54,32,67,89,90,32,21};
int i;
// calculates the total amount of elements in the array
int size = sizeof(numbers)/sizeof(numbers[0]);

for (i = size - 1; i >= 0; i--)
{
    printf("%d ", numbers[i]);
}
    return 0;
}
