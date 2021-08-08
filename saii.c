#include<stdio.h>
int main()
{
int rad ;
float pi=3.14 , area, ci;
printf(“enter radius of circle :” );
scanf(“%d”, &rad);
area = pi * rad * rad;
printf(“Area of circle : %f”, area);
ci= 2 * pi * rad;
printf(“Circumference : %f”, ci);
return 0;
}
