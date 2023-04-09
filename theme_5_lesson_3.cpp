#include<stdio.h>
#include<time.h>
#include<stdlib.h>

main()
{   
    int col;
    int row;

    printf("Введите количество столбцов:\n");
    scanf("%i", &col);

    printf("Введите количество строк:\n");
    scanf("%i", &row);

    int array[col][row];

    srand(time(NULL));

    for(int j=0; j<col; j++)
    {
        for(int i=0; i<row; i++ )
        {
            array[j][i] = rand()%10+(-2);
        }
    }

    for(int j=0; j<col; j++)
    {
        for(int i=0; i<row; i++ )
        {
            printf("%2i", &array[j][i]);
        }

        printf("\n");
    }
}