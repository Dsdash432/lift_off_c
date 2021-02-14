#include<stdio.h>
int main()
{
    int a[100], i, small, big, size;
    printf("Enter the size of array \n");
    scanf("%d", &size);

    printf("Enter %d elements in the array \n", size);
    for(i = 0; i<size; i++)
    scanf("%d", &a[i]);

    big = a[0];
    for(i = 1; i < size; i++)
    {
        if(big < a[i])
        {
            big = a[i];
        }
    }
    printf("The biggest number is %d \n", big);
    small = a[0];
    for(i = 1; i < size; i++)
    {
        if(small > a[i])
        {
            small = a[i];
        }
    }
    printf("The smallest number is %d", small);
    return 0;
}