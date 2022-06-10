#include <stdio.h>
/**
* Main - accepts user inputs to calculate the circumference and area of a circle
*
*/
int main (void)
{
  const double PI = 3.14159;
  double circumference;
  double area;
  double radius;
  
  printf("Enter radius: ");
  scanf("%lf", &radius);
  
  circumference = 2 * PI * radius;
  printf("circumference: %lf\n", circumference);
  
  area = PI * radius * radius;
  printf("Area: %lf", Area)
  return 0;
}    
