#include <stdio.h>

float squareRoot(float x);
float absoluteValue(float x);

int main(void)
{
    float a, b, c, discriminant, roots;

    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter c: ");
    scanf("%f", &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant < 0)
        printf("The roots are imaginary\n");
    else {
        float squareRootDiscriminant = squareRoot(discriminant);
        roots = (-b + squareRootDiscriminant) / (2 * a);
        printf("Roots = %f\n", roots);
        roots = (-b - squareRootDiscriminant) / (2 * a);
        printf("Roots = %f\n", roots);
    }

    printf("\n");
    return 0;
}

float squareRoot(float x)
{
    const float epsilon = .00001;
    float guess = 1.0;

    while (absoluteValue(guess * guess - x) >= epsilon) 
        guess = (x / guess + guess) / 2;


    return guess;
}

float absoluteValue(float x)
{
    if (x < 0)
        x = -x;
    return (x);
}
