#include <stdio.h>

int main(void)
{
    struct date {
        int month;
        int day;
        int year;
    };

    struct date today, *dateptr;
    dateptr = &today;

    dateptr->month = 9;
    dateptr->day = 25;
    dateptr->year = 2015;

    printf("Today's date is %i/%i/%.2i.\n", dateptr->month, dateptr->day, dateptr->year % 100);

    return 0;
}
