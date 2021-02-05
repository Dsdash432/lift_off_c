#include<stdio.h>
void main()
{
    float r,d,ar,cir;
    printf("Enter radius \n");
    scanf("%f",&r);
    d = r*2;
    cir = 2*3.14*r;
    ar = 3.14*r*r;
    printf("Diameter of circle is: %f \n",d);
    printf("Circumference of circle is: %f \n",cir);
    printf("Area of the circle is: %f \n", ar);
}