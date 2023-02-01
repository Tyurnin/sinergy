#include<stdio.h>

main()
{   
    int n = 0;
    int a = 0;
    float sum = 0;
    printf("Введите количество чисел\n");
    scanf("%i", &n);   
    printf("Введите числа\n");
    scanf("%i", &a);     

    int min = a;
    int max = a;
    sum = sum+a;

    for (int i = 1; i < n; i++)
    {
        printf("Введите числа\n");
        scanf("%i", &a);  

        sum = sum+a;
        
        if(a<min)
        {
            min = a;
        }
        if(a>max)
        {
            max=a;
        }

    }
    printf("Минимальное число  = %i\n",min);
    printf("Максимальное число  = %i\n",max);
    printf("Сумма чисел  = %f\n",sum);
    printf("Среднее  = %f\n",sum/n);
}
