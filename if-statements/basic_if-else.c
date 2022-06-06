#include<stdio.h>
int main(void)
{
	int age;
	
	printf("Please enter your age: ");
	scanf("%d", &age);
	if (age < 40)
	{
		printf("You're pretty young!\n");
	}
	else if (age == 40)
	{
		printf("You're old!\n");
	}
	else
	{
		printf("You're really old!\n");
	}
   return (0);
}
