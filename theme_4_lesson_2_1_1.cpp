#include<stdio.h>

main()
{
    
    int mas[7];
    printf("Введите числа:");

    for (int i=0; i<7; i++)
    {
        scanf("%i", &mas[i]);
    }
    for(int i=0; i<7; i++)
    {
        printf("%i ", mas[i]);
    }
}