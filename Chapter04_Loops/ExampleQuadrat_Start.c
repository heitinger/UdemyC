#include <stdbool.h>
#include <stdio.h>

int main()
{
    // Quadrat: Seitenlänge a vom User einlesen
    // Überprüfe: Ob der User eine "gültige" Zahl eingegeben hat
    // Gebe dem User solange die Möglichkeit die Zahl einzugeben,
    //      bis sie gültig ist
    // Berechne den Umfang und den Flaecheninhalt des Quadrats
    // Gebe diese Werte dann in der Konsole aus
    // u = 4 * a
    // a = a**2

    int a;
    printf("Enter a value for a: ");
    scanf("%d", &a);

    while (a <= 0)
    {
        printf("Invalid input! Please try again!\n");
        printf("Enter a value for a: ");
        scanf("%d", &a);
    }

    int perimeter = 4 * a;
    int area = a * a;

    printf("Perimeter: %d\n", perimeter);
    printf("Area: %d\n", area);

    return 0;
}
