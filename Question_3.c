#include<stdio.h>
int main()
{
    int a[100], size, i, sum = 0, f;
    printf("Enter the size of array \n");
    scanf("%d", &size);

    printf("Enter %d elements in the array \n", size);
    for(i = 0; i < size; i++)
    scanf("%d", &a[i]);

    for(i = 0; i < size; i++)
    {
        if(i%2 == 0)
        {
            sum += a[i];
        }
    }
    printf("The sum of even place numbers is %d \n", sum);
    return 0;
}