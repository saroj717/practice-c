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
    printf("Square root a:  %.2f is %.2f\n", a, sqrt(a));
    printf("Square root b:  %.2f is %.2f\n", b, sqrt(b));
    printf("Power:  %.2f to the power of %.2f = %.2f\n", a, b,  pow(a,b));
    
    
    return 0;
}