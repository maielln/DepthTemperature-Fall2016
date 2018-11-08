#include <stdio.h>

double celsius_at_depth(double depth);
double convert_fahrenheit(double cel);

int main(void)
{
  /* This program has the user enter a depth in kilometers and computes
the tempurature at that depth in Celsius and Fahrenheit. */

  double depth = 0.0;

  printf("Please enter the depth in Kilometers: ");
  scanf("%lf", &depth);

  printf("%s%lf\n%s%lf\n", "The temperature in Celsius is: ",
celsius_at_depth(depth), "The temperature in Fahrenheit is: ",
convert_fahrenheit(celsius_at_depth(depth)));

  return 0;
}

double celsius_at_depth(double depth)
{
  return (10.0 * depth) + 20;
}

double convert_fahrenheit(double cel)
{
  return (1.8 * cel) + 32;
}

