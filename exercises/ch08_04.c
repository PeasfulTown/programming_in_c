#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

int calculateDateValue(struct date d);
int calculateDayOfWeek(struct date d);
int fYearMonth(struct date d);
int gMonth(struct date d);
void printDayOfWeek(int dayOfWeek);

int main(void)
{
    struct date date = { 8, 8, 2004 };

    printDayOfWeek(calculateDayOfWeek(date)); 

    return 0;
}

void printDayOfWeek(int dayOfWeek)
{
    switch (dayOfWeek) {
        case 0:
            printf("Sunday");
            break;
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        default:
            printf("Unknown date");
            break;
    }

    printf("\n");
}

int calculateDateValue(struct date d)
{
    return 1461 * fYearMonth(d) / 4 + 153 * gMonth(d) / 5 + d.day;
}

int calculateDayOfWeek(struct date d)
{
    int dateValue = calculateDateValue(d);
    
    return ( dateValue - 621049 ) % 7;
}

int fYearMonth(struct date d)
{
    int year;

    if (d.month <= 2)
        year = d.year - 1;
    else
        year = d.year;

    return year;
}

int gMonth(struct date d)
{
    int month;

    if (d.month <= 2)
        month = d.month + 13;
    else
        month = d.month + 1;

    return month;
}


