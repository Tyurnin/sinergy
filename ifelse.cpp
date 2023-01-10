#include <stdio.h>

main()
{
    int a,b;
    printf("a=");
    scanf("%i",&a);
    printf("b=");
    scanf("%i",&b);

    if(a<b)
    {
        printf("a меньше");
    }
    
    else if (a>b)
    {
        printf("a больше");
    }

    else
    {
        printf("a=b");
    }
    
}
