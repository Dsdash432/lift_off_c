#include<stdio.h>
void main()
{
    float a,b;
    printf("Enter the temperature in celsius \n");
    scanf("%f", &a);
    b = (a*1.8)+32;
    printf("The temperature in fahrenheit is: %f /n",b);

}