#include<stdio.h>
void main()
{
    int a,b,c,d,e,f,g;
    printf("please enter two numbers: \n");
    scanf("%d %d", &a, &b);
    c = a+b;
    d = a-b;
    e = a*b;
    f = a/b;
    g = a%b;
    printf("Addition of two numbers is: %d\n", c);
    printf("Subtraction of two numbers is: %d\n", d);
    printf("Multiplication of two numbers is: %d\n", e);
    printf("Division of two numbers is: %d\n", f);
    printf("Modulus of two numbers is: %d\n", g);
    
}