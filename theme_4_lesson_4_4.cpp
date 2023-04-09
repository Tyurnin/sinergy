#include<stdio.h>

main()
{
    int n;
    printf("Введите длину массива:\n");
    scanf("%i", &n);

    int mas[n];
    printf("Введите числа массива:\n");

    for (int i=0; i<n; i++)
    {
        scanf("%i", &mas[i]);
    }
    
    int min, max;
    min = max = mas[0];

    int sum = 0;

    for (int i=0; i<n; i++)
    {
        if(mas[i]>max)
        {
            max=mas[i];
        }

        if(mas[i]<min)
        {
            min=mas[i];
        }

        sum+=mas[i];
    }

    float mean = (float)sum/(float)n;

    printf("Минимальное значение массива равно %i\n", min);
    printf("Максимальное значение массива равно %i\n", max);
    printf("Сумма чисал массива равна %i\n", sum);
    printf("Среднее арифметическое чисел массива равно %i\n", mean);

}