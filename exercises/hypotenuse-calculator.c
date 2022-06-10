#include <stdio.h>
#include <math.h>
// main - accept user input to calculate the hypotenuse of a right triangle
int main(void)
{
  int a;
  int b;
  int c;
  
  printf("Enter your opposite value: ");
  scanf("%d", a);
  
  printf("Enter your adjacent value: ");
  scanf("%d", b);
  
  c = sqrt(a * a + b * b);
  printf("Hypotenuse is: %d", c);
  
  return 0;
}
