
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Einlesen der Zahl
    int number;
    printf("Bitte geben Sie eine zwölfstellige ganze positive Zahl ein: ");
    scanf("%d", &number);

    // Zerlegen der Zahl in ihre Ziffern
    int digits[12];
    for (int i = 0; i < 12; i++) {
        digits[i] = number % 10;
        number /= 10;
    }

    // Ausgabe der einzelnen Ziffern
    printf("Die einzelnen Ziffern der Zahl sind: ");
    for (int i = 11; i >= 0; i--) {
        printf("%d ", digits[i]);
    }
    printf("\n");

    // Berechnung der Quersumme
    int sum_of_digits = 0;
    for (int i = 0; i < 12; i++) {
        sum_of_digits += digits[i];
    }
    printf("Die Quersumme der Zahl ist: %d\n", sum_of_digits);

    return 0;
}
