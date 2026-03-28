#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

int fYearMonth(struct date d);
int gMonth(struct date d);
int calculateElapsedDays(struct date d1, struct date d2);
int calculateDateValue(struct date d);

int main(void)
{
    struct date date1, date2;

    printf("Enter first date: ");
    scanf("%i%i%i", &date1.day, &date1.month, &date1.year);

    printf("Enter second date: ");
    scanf("%i%i%i", &date2.day, &date2.month, &date2.year);

    printf("Days elapsed between 2 dates: %d\n", calculateElapsedDays(date1, date2));
}

int calculateElapsedDays(struct date d1, struct date d2)
{
    return calculateDateValue(d2) - calculateDateValue(d1);
}

int calculateDateValue(struct date d)
{
    return 1461 * fYearMonth(d) / 4 + 153 * gMonth(d) / 5 + d.day;
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
