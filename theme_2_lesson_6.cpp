#include<stdio.h>
#include<math.h>

main()
{
    int day, month, year;

    printf("Введите день: ");
    scanf("%i",&day);

    printf("Введите месяц: ");
    scanf("%i",&month);

    printf("Введите год: ");
    scanf("%i",&year);

    if (year%4==0)
    {
        printf("Год високосный\n");
    }
    else
    {
        printf("Год не високосный\n");
    }
    
    switch (year%12)
    {
    case 0:
        printf("Год Обезьяны\n");
        break;
    case 1:
        printf("Год Петуха\n");
        break;
    case 2:
        printf("Год Собаки\n");
        break;
    case 3:
        printf("Год Свиньи\n");
        break;
    case 4:
        printf("Год Крысы\n");
        break;
    case 5:
        printf("Год Быка\n");
        break;
    case 6:
        printf("Год Тигра\n");
        break;
    case 7:
        printf("Год Кролика\n");
        break;
    case 8:
        printf("Год Дракона\n");
        break;
    case 9:
        printf("Год Змеи\n");
        break;
    case 10:
        printf("Год Лошади\n");
        break;
    case 11:
        printf("Год Козы\n");
        break;
       }
       
   if (month>12)
   {
   		printf("Неверный формат месяца\n");
   }
   else
   {
	if (day<21)
	{
		switch (month)
    {
    case 1:
        printf("Козерог\n");
        break;
    case 2:
        printf("Водолей\n");
        break;
    case 3:
        printf("Рыбы\n");
        break;
    case 4:
        printf("Овен\n");
        break;
    case 5:
        printf("Телец\n");
        break;
    case 6:
        printf("Близнецы\n");
        break;
    case 7:
        printf("Рак\n");
        break;
    case 8:
        printf("Лев\n");
        break;
    case 9:
        printf("Дева\n");
        break;
    case 10:
        printf("Весы\n");
        break;
    case 11:
        printf("Скорпион\n");
        break;
    case 12:
        printf("Стрелец\n");
        break;
       }
	}
	else
	{
		switch (month)
		{
	case 12:
        printf("Козерог\n");
        break;
    case 1:
        printf("Водолей\n");
        break;
    case 2:
        printf("Рыбы\n");
        break;
    case 3:
        printf("Овен\n");
        break;
    case 4:
        printf("Телец\n");
        break;
    case 5:
        printf("Близнецы\n");
        break;
    case 6:
        printf("Рак\n");
        break;
    case 7:
        printf("Лев\n");
        break;
    case 8:
        printf("Дева\n");
        break;
    case 9:
        printf("Весы\n");
        break;
    case 10:
        printf("Скорпион\n");
        break;
    case 11:
        printf("Стрелец\n");
        break;
		}
	}
   }
   
}
