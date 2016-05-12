// Created from The C Programming Language Book, 2nd Edition


#include <stdio.h>

int main ()
  {
    int fahr, celsius, lower, upper, step;
    lower = 0;
    upper = 200;
    step = 20;
    fahr = lower;
      while (fahr <= upper)
        {
          celsius = 5 * (fahr-32) / 9;
          printf("%d\t%d\n", fahr, celsius);
          fahr = fahr + step;
        }
  }
