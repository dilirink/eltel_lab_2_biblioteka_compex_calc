#include <stdio.h>
#include "func.h"
void sub (double a,double a1,double b,double b1)
{
	double c1,c2;
      c1 = a - b;
      c2 = a1 - b1;

      if (c1 >= 0)
        printf("subtract= %0.3lf + %0.3lfi\n", c1, c2);
      else
        printf("subtract= %0.3lf %0.3lfi\n", c1, c2);
}
