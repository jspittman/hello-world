//Shoud take input and spit out identical output, in an infinate loop

#include <stdio.h>

int main ()
  {
      int c;
      c = getchar();
      while (c != EOF)  {
        putchar(c);
        c = getchar();
      }
  }
