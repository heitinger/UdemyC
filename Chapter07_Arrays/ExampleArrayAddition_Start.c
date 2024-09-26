#include <stdint.h>
#include <stdio.h>

int main()
{
    float vector1[3] = {0.0f, 0.0f, 0.0f};
    for (int i = 0; i < 3; i++)
    {
        printf("Enter a number %d for vector 1: ", i);
        scanf("%f", &vector1[i]);
    }

    float vector2[3] = {0.0f, 0.0f, 0.0f};
    for (int i = 0; i < 3; i++)
    {
        printf("Enter a number %d for vector 2: ", i);
        scanf("%f", &vector2[i]);
    }

    float result[3] = {0.0f, 0.0f, 0.0f};
    for (int i = 0; i < 3; i++)
    {
        result[i] = vector1[i] + vector2[i];
        printf("%f\n", result[i]);
    }

    return 0;
}
