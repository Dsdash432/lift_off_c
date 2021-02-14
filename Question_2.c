#include<stdio.h>
int main()
{
    int a[100], size, i, sum = 0, f;
    printf("Enter the size of array \n");
    scanf("%d", &size);

    printf("Enter %d elements in the array \n", size);
    for(i = 0; i < size; i++)
    scanf("%d", &a[i]);

    f = a[1];
    for(i = 1; i<size; i+2)
    {
        sum = f+sum;
    }
    printf("The sum of even place numbers is %d \n", sum);
    return 0;
}