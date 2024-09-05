#include <stdio.h>

int main()
{

int matrix_number;
printf("Enter a number for your matrix: ");
scanf("%d", &matrix_number);

for (int k = 0; k <= matrix_number + 1; k++)
{
    printf("<  ");
    for (int i = 1; i <= matrix_number; i++)
    {
        if (k == 0)
        {
            printf("  ^    ");
        }
        else if (k == matrix_number + 1)
        {
            printf("  v    ");
        }
        else
        {
            printf("(%d,%d)  ", k, i);
        }
    }
    printf(">\n");
}

    return 0;
}
