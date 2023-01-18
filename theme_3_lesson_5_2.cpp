#include<stdio.h>

main()
{
    int i=5, sum=0;
    
    while(i<16)
    {
        sum=sum+i;
        i+=1;
    }
    printf("Сумма чисел от 5 до 15 включительно равна: %i\n", sum);
}