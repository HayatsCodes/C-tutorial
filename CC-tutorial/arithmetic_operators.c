#include<stdio.h>
int main(void)
/**
* printf - prints all arithmetic operators
*int a; int b - holds integer
*int c - returns integers operations on all arithmetic operators
*
*return 0;
*/
{
	int a = 10;
	int b = 20;
	int c;

	c = a + b;
	printf("line 1 - value of c is %d\n", c);

	c = a - b;
	printf("line 2 - value of c is %d\n", c);

	c = a * b;
	printf("line 3 - value of  c is %d\n", c);

	c = b / a;
	printf("line 4 - value of c is %d\n", c);

	c = b % a;
	printf("line 5 - value of c is %d\n", c);

	c = a++;
	printf("line 6 - value of c is %d\n", c);

	c = b--;
	printf("line 7 - value of c is %d\n", c);

	return (0);
}
