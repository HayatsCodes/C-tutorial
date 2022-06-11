#include <stdio.h>

/**
* main - basic operation calculator
* 
* Return; on success 0.
*/
int main(void) 
{
    char operator;
    double num1;
    double num2;
    double result;
    
    printf("Enter number 1: ");
    scanf("%lf", &num1);
    
    printf("Enter operator(+ * - /): ");
    scanf("\n%c", &operator);
    
    printf("Enter number 2: ");
    scanf("%lf", &num2);
    
    // switch - used in place of many if, else if, and if statements
    switch(operator)
    {
        case '+':
        result = num1 + num2;
        printf("%.2lf", result);
        break;
        
        case '-':
        result = num1 -  num2;
        printf("%.2lf", result);
        break;
        
        case '*':
        result = num1 * num2;
        printf("%.2lf", result);
        break;
        
        case '/':
        result = num1 / num2;
        printf("%.2lf", result);
        break;
        
        default:
        printf("%c is not a valid operator", operator);
    }
    return 0;
}
