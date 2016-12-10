// do popr

#include <stdio.h>

int silnia(int a) {
  int s = 1;

  if (a < 1) {
    printf("błąd: silnia jest zdefinowana dla licz nieujemnych; podano %d\n", a);
    exit(1);

  } else {
    for(int n = 2;n <= a; n++) {
      s = s * n;
    }
    return s;
  }
}

int main() {
  for(int n = 1; n < 11; n++) {
    printf("%d %d\n", n, silnia(n));
  }
}
