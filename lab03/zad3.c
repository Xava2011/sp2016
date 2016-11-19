#include <stdio.h>

int main() {
  double pi = 4;
  int x;
  double dziel = 3;
  int znak = 1;

  printf("podaj liczbę naturalną: ");
scanf("%d/n", &x);


for (int i = 0; i < x; i++, dziel += 2)  {
  if (znak==1)   {
    //pi -= ( 4 / dziel );
    znak = -1;

    } else {
    //pi += (4 / dziel);
    znak = 1;
  }
  pi += znak * (4 / dziel);
}
printf("%f\n", pi);
}
