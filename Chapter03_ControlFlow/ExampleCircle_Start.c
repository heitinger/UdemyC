#include <stdio.h>

#define PI 3.14159f

int main()
{
    // Circle Example
    // 1.) Read the values for r from the user,
    //     check if the input is correct (non-negative length)
    // 2.) Compute the perimeter and area of the circle
    // 3.) Print the computed values to the console

    float r;
    printf("Enter a value for the radius r: ");
    scanf("%f", &r);

    if (r <= 0)
    {
        printf("Invalid input!\n");
        return 1;
    }

    float perimeter = 2 * PI * r;
    float area = r * r * PI;

    printf("Perimeter: %f\n", perimeter);
    printf("Area: %f\n", area);

    return 0;
}
