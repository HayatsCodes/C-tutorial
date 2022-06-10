#include <stdio.h>
/**
* Main - accepts user inputs to calculate the circumference of a circle
*
*/
int main (void)
{
  const double PI = 3.14159;
  double circumference;
  double radius;
  
  printf("Enter radius: ");
  scanf("%lf", &radius);
  
  circumference = 2 * PI * radius;
  printf("circumference: %lf", circumference);
  
  return 0;
}    
