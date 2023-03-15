#include <stdio.h>

typedef enum
{
    MON,
    TUE,
    WED,
    THU,
    FRI,
    SAT,
    SUN
} DayOfWeek;

DayOfWeek findDayOfWeek(int day, int month)
{
    int total, piece;
    if (month == 1)
        total = day;
    else if (month == 2)
        total = 31 + day;
    else if (month == 3)
        total = 31 + 28 + day;
    else if (month == 4)
        total = 31 + 28 + 31 + day;
    else if (month == 5)
        total = 31 + 28 + 31 + 30 + day;
    else if (month == 6)
        total = 31 + 28 + 31 + 30 + 31 + day;
    else if (month == 7)
        total = 31 + 28 + 31 + 30 + 31 + 30 + day;
    else if (month == 8)
        total = 31 + 28 + 31 + 30 + 31 + 30 + 31 + day;
    else if (month == 9)
        total = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day;
    else if (month == 10)
        total = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;
    else if (month == 11)
        total = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
    else
        total = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day;
    piece = total % 7;
    if (piece == 1)
        return TUE;
    else if (piece == 2)
        return WED;
    else if (piece == 3)
        return THU;
    else if (piece == 4)
        return FRI;
    else if (piece == 5)
        return SAT;
    else if (piece == 6)
        return SUN;
    else
        return MON;
}

int main()
{
    int day, month;
    DayOfWeek dow;

    printf("Day:1 Month:1 of Year 2013 is Tuesday.\n");
    printf("Enter Day and Month: ");
    scanf("%d %d", &day, &month);
    dow = findDayOfWeek(day, month);
    printf("Day:%d Month:%d of Year 2013 is ", day, month);
    switch (dow)
    {
    case SUN:
        printf("Sunday.\n");
        break;
    case MON:
        printf("Monday.\n");
        break;
    case TUE:
        printf("Tuesday.\n");
        break;
    case WED:
        printf("Wednesday.\n");
        break;
    case THU:
        printf("Thursday.\n");
        break;
    case FRI:
        printf("Friday.\n");
        break;
    case SAT:
        printf("Saturday.\n");
        break;
    }
}
