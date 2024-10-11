// Вычисление площади параллелограма
#include <stdio.h>

int main ()
{
float l,w;
float s;

printf("\nCalculate square rectangle\n");
printf("enter similar data:\n");
printf("Long (см.) -> ");
scanf("%f", &l) ;
printf("width (см.) -> ");
scanf("%f", &w) ;
s = 1 * w;
printf("square of parallelogram: %10.2f sq.cent.\n", s);

printf("\n\nFor end press <Enter>");

}
