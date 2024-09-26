#include <stdint.h>
#include <stdio.h>

void count_threshold_elements(float *array, int length, float threshold, int *num_below, int *num_above)
{
    if (NULL == array || length == 0)
    {
        return;
    }

    for (int i = 0; i < length; i++)
    {
        if (array[i] < threshold)
        {
            *num_below += 1;
        }
        else if (array[i] > threshold)
        {
            *num_above += 1;
        }
    }
}

int main()
{
    float vec[6] = {0.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f};

    float threshold = 2.0f;
    int num_below = 0;
    int num_above = 0;

    count_threshold_elements(vec, 6, threshold, &num_below, &num_above);

    printf("Threshold is: %f\n", threshold);
    printf("Num Below: %d\n", num_below);
    printf("Num Above: %d\n", num_above);

    return 0;
}
