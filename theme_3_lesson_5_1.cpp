#include<stdio.h>

main()
{
    int i = 1;

    while(i<10)
    {
        printf("Hello\n");
        i+=1;
    }


    i=0;
    while (i<15)
    {
        printf("%i\n",i);
        i+=1;
    }
    
     i=0;
    while (i<15)
    {
        if(i%2!=0)
        {
            printf("%i\n",i);
        }
        i+=1;
    }
}