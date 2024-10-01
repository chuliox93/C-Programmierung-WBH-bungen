#include <stdio.h>
#include <stdlib.h>

int main() {
  char string[100];
  int i = 0;

  // Einlesen von Buchstaben in eine Schleife
  while (i < 99) {
    char ch = getchar();
    if (ch < 'A' || ch > 'z' || (ch > 'Z' && ch < 'a')) {
      break;
    }
    string[i] = ch;
    i++;
  }

  // Terminieren der Zeichenkette
  string[i] = '\0';

  // Ausgabe der Zeichenkette
  printf("Die eingegebene Zeichenkette ist: %s\n", string);

  return 0;
}
