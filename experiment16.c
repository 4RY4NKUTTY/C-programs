// question 16[1]

#include <stdio.h>
#include <math.h>

int main() {
   double x = 25.0;
   double result = sqrt(x);
   printf("Square root of %lf is %lf\n", x, result);
   return 0;
}
//[2]

#include <stdio.h>
#include <math.h>

int main() {
   double x = 2.0;
   double y = 3.0;
   double result = pow(x, y);
   printf("%lf raised to the power of %lf is %lf\n", x, y, result);
   return 0;
}