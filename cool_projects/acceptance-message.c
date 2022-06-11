#include <stdio.h>
/**
* message - prints message to standard output
* 
* main - calls message function and prints for different users
* 
* Return: on success 0.
*/
void message(char name[], int duration)
{
    printf("\nHello %s. ", name);
    printf("\nCongratulations! You've been accepted into our %d months program", duration);
}
int main(void) 
{
   {
      char name[] = "Fatimah";
      int duration = 6;
      message(name, duration);
   }
    
   {
      char name[] = "Abdulrahman";
      int duration = 3;
      message(name, duration);
   }
    
   {
      char name[] = "Imran";
      int duration = 9;
      message(name, duration);
   }
   
   {    
      char name[] = "Muhammad";
      int duration = 12;
      message(name, duration);
   }
    
    return 0;
}
