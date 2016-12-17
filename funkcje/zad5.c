#include <stdio.h>
void prostokat(int szerokosc, int dlugosc);

int main() {
  prostokat(6, 10);
}


void krawedz_pozioma(int width) {
  for (a = 0; a < width; a++)
      printf("* "); // gorna krawedz
    printf("\n");

}


void prostokat(int szerokosc, int dlugosc) {
  int a, b;




  }
xxx(szerokosc);
  for (a = 0; a < dlugosc - 2; a++) {
    printf("*"); // lewa krawedz
    for (b = 0; b < szerokosc + 2; b++)
    printf(" "); // spacje zamiast gwiazdek
    printf(" *\n"); // prawa krawedz
}
  for (a = 0; a < szerokosc; a++)
    printf("* "); // dolna krawedz
    printf("\n");


}
