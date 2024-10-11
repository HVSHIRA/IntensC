//вычисление площади параллелепипеда
#include <stdio.h>

int main()
{
float l,w,h;
float s;

printf("\nCalculate surface area of ​​a parallelepiped\n");
printf("Enter similar data:\n");
printf("long (cent) ->");
scanf("%f", &l);
printf("wedth (cent) ->");
scanf("%f", &w);
printf("hight (cent) ->");
scanf("%f", &h);
s = (l*w + l*h + w*h)*2;
printf("square of surface area: %6.2f sq.cent.\n",s);
printf("\n\nFor end press <Enter>");

}
