#include <stdio.h>
#include <ctype.h>
/**
* main - converts celsius to farenheit and vice versa.
* @temp -stores the temperature value
* 
* Return; on success 0.
*/
int main(void) 
{
    char unit;
    float temp;
    
    printf("is the temperature in (F) or (C)? ");
    scanf("%c", &unit);
    // toupper - converts lowercase inputs to uppercase
    unit = toupper(unit);
    
    if (unit == 'C')
    {
        printf("Enter the temp in Celsius: ");
        scanf("%f", &temp);
        temp  = (temp * 9/5) + 32;
        printf("The temperature in Farenheit is: %.2f", temp);
    }
    
    else if (unit == 'F')
    {
        printf("Enter the temp in Farenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("The temperature in Celsius is: %.2f", temp);
    }
    else
    {
        printf("%c is not a valid unit of measurement", unit);
    }
    return 0;
}
