#include<stdio.h>

main()
{
    int n;
    printf("Введите длину массива:");
    scanf("%i", &n);

    int mas[n];
    printf("Введите числа:");

    for (int i=0; i<n; i++)
    {
        scanf("%i", &mas[i]);
    }
    for(int i=0; i<n; i++)
    {
        printf("%i ", mas[i]);
    }
}