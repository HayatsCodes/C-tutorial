#include <stdio.h>
int main(void) {
    char grade;
    
    printf("Enter your grade: ");
    scanf("%c", &grade);
    
    switch(grade)
    {
        case 'A':
        printf("Perfect!");
        break;
        
        case 'B':
        printf("Very Good!");
        break;
        
        case 'C':
        printf("Good!");
        break;
        
        case 'D':
        printf("Fair!");
        break;
        
        case 'F':
        printf("Fail!");
        break;
        
        default:
        printf("Enter a valid grade!");
    }
        
    return 0;
}
