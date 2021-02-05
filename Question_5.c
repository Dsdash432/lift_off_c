#include<stdio.h>
void main()
{
    char a;
    printf("Enter an alphabet \n");
    scanf("%c",&a);
    switch(a)
    {
        case 'a':
        printf("Vowel \n");
        break;
        case 'e':
        printf("Vowel \n");
        break;
        case 'i':
        printf("Vowel \n");
        break;
        case 'o':
        printf("Vowel \n");
        break;
        case 'u':
        printf("Vowel \n");
        break;
        default:
        printf("Consonant \n");
    }
}