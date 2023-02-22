#include <stdio.h>
#include <math.h>
int main(void)
{
    float a;
    printf("Enter the value: ");
    scanf("%f", &a);
    float b;
    printf("Enter the value: ");
    scanf("%f", &b);

    printf("Addition: %.2f + %.2f = %.2f\n", a, b, a+b);
    printf("Subtraction: %.2f - %.2f = %.2f\n", a, b, a-b);
    printf("Multiplication: %.2f * %.2f = %.2f\n", a, b, a*b);
    printf("Division: %.2f / %.2f = %.2f\n", a, b, a/b);
    
    
    return 0;
}