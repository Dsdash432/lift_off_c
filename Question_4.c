#include<stdio.h>
void main()
{
    float phys,chem,bio,mat,com,p;
    printf("Enter Physics marks \n");
    scanf("%f", &phys);
    printf("Enter Chemistry marks \n");
    scanf("%f", &chem);
    printf("Enter Biology marks \n");
    scanf("%f", &bio);
    printf("Enter Maths marks \n");
    scanf("%f", &mat);
    printf("Enter Computer marks \n");
    scanf("%f", &com);
    p = (phys+chem+bio+mat+com)/5;
    if(p>=90)
    {
        printf("Grade A \n");
    }
    else if(p>=80)
    {
        printf("Grade B \n");
    }
    else if(p>=70)
    {
        printf("Grade C \n");
    }
    else if(p>=60)
    {
        printf("Grade D \n");
    }
    else if(p>=40)
    {
        printf("Grade E \n");
    }
    else if(p<40)
    {
        printf("Grade F \n");
    }
}