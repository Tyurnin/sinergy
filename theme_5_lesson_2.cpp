#include<stdio.h>

main()
{   
    int col;
    int row;

    printf("Введите количество столбцов:\n");
    scanf("%i", &col);

    printf("Введите количество строк:\n");
    scanf("%i", &row);

    int array[col][row];

    printf("Введите числа массива:\n");

    for(int j=0; j<col; j++)
    {
        for(int i=0; i<row; i++ )
        {
            scanf("%i", &array[j][i]);
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