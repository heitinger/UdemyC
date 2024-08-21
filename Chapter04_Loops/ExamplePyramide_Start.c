#include <stdio.h>

int main()
{
    // 1
    // 11
    // 111
    // 1111
    // 11111
    // 11111
    // 1111
    // 111
    // 11
    // 1

    int height;
    printf("Enter the height of your pyramide: ");
    scanf("%d", &height);

    for (int counter = 0; counter < height; counter++)
    {
        for (int ones = 0; ones <= counter; ones++)
        {
            printf("1 ");
        }
        printf("\n");
    }

    for (int counter = height; counter >= 0; counter--)
    {
        for (int ones = counter; ones >= 0; ones--)
        {
            printf("1 ");
        }
        printf("\n");
    }

    return 0;
}
