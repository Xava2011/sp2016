    //1. Napisać rekurencyjną implementację funkcji obliczającej nk (n do potęgi k).
    // n*n*n*n = n * (n*n*n)
    // podstawa^wykladnik = podstawa * podstawa^(wykladnik-1)

    #include <stdio.h>

    double nk(int podstawa, unsigned int wykladnik);

    int main() {
      printf("5^4 = %.2lf\n", nk(5, 4));
      printf("5^0 = %.2lf\n", nk(5, 0));
      printf("5^-2 = %.2lf\n", nk(5, -2));
  }

        double nk(int podstawa, int wykladnik) {
            if (wykladnik < 0)
              return 1 / nk(podstawa, -wykladnik);

          else  if (wykladnik == 0)
            return 1;
          else
          return podstawa * nk(podstawa, wykladnik - 1);

        }
