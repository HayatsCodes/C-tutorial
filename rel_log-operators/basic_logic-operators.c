#include<stdio.h>
int main(void)
{
	int m;
	int n;
	int o;
	int p;

	m = 40, n =20;
	if (m > n && m != 0)
	{
		printf("&& operator: true when both conditions are true\n");
	}
	o = 20, p = 30;
	if (o > p || p !=20)
	{
		printf("|| operator: true when one condition is true\n");
	}
	if (!(m > n && m != 0))
	{
		printf("! operator: true when both conditions are true\n");
	}
	else
	{
		printf("! operator; status is inverted\n");
	}
	return (0);
}	
