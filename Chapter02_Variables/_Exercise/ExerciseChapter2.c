#include <stdio.h>

int main()
{
    unsigned int age;
    printf("Please  enter your age in years: ");
    scanf("%u", &age);

    unsigned int days = age * 365;
    unsigned int hours = days * 24;
    unsigned int minutes = hours * 60;
    unsigned int seconds = minutes * 60;

    printf("You are living since %u days\n", days);
    printf("You are living since %u hours\n", hours);
    printf("You are living since %u minutes\n", minutes);
    printf("You are living since %u seconds\n", seconds);


    return 0;
}
