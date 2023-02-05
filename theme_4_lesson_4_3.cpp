#include<stdio.h>

main()
{
    int mas[100];
    int n;

    printf("Введите длину массива:\n");
    scanf("%i", &n);

    printf("Введите числа массива:\n");
    
    for(int i = 0; i<n; i++)
    {
        scanf("%i", &mas[i]);
    }

    printf("Неотсортированный массив:\n");
    
    
    for(int i = 0; i<n; i++)
    {
        printf("% i", mas[i]);
    }
    printf("\n");
    bool flag = true;

    while(flag)
    {
        flag = false;

        for(int i=0; i<n-1; i++)
        {
        if(mas[i] > mas[i+1])
        {
            int h = mas[i];
            mas[i] = mas[i+1];
            mas[i+1] = h;
            flag = true;
        }
        }
    }

    printf("Отсортированный массив:\n");
    
    for(int i = 0; i<n; i++)
    {
        printf("% i", mas[i]);
    }
    printf("\n");

    
}