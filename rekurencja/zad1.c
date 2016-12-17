    //1. Napisać rekurencyjną implementację funkcji obliczającej nk (n do potęgi k).
    // n*n*n*n = n * (n*n*n)
    // podstawa^wykladnik = podstawa * podstawa^(wykladnik-1)

    #include <stdio.h>

    int nk(int podstawa, unsigned int wykladnik);

    int main() {
      printf("5^4 = %.2lf\n", nk(5, 4));
      printf("5^0 = %.2lf\n", nk(5, 0));
  }

        int nk(int podstawa, unsigned int wykladnik) {
            if (wykladnik == 0)
            return 1;
          else
          return podstawa * nk(podstawa, wykladnik - 1);

        }
