#include <stdio.h>
#include <time.h>
static const int LOWER  = 0.0f;
static const int UPPER = 300.0f;
static const int STEP = 20.0f;

float fahr_to_celsius(float fahr)
{
  return (5.0/9.0) * (fahr-32.0);
}

int main() 
{
  clock_t t = clock();
  float fahr;
  fahr = LOWER;
  for (float fahr = LOWER; fahr <= UPPER; fahr+=STEP)
    printf("%3.0f %6.1f\n", fahr, fahr_to_celsius(fahr));
  t = clock() - t;
  double time_taken = ((double)t)/CLOCKS_PER_SEC;
  printf("%f time\n");
  return 0;
}
