#include<stdio.h>

main()
{   
    int sum = 0;
    for (int i = 0; i < 101; i++)
    {
        sum=sum+i;
    }
    printf("Сумма чисел от 1 до 100 = %i\n",sum);                 
}
