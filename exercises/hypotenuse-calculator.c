#include <stdio.h>
#include <math.h>
// main - accept user input to calculate the hypotenuse of a right triangle
int main(void)
{
  double a;
  double b;
  double c;
  
  printf("Enter your opposite value: ");
  scanf("%lf", &a);
  
  printf("Enter your adjacent value: ");
  scanf("%lf", &b);
  
  c = sqrt(a * a + b * b);
  printf("Hypotenuse is: %lf", &c);
  
  return 0;
}
