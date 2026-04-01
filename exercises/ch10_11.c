#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

int number_of_days(struct date *date)
{
    const int days[] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    if (date->month == 2) {
        if ((date->year % 4 == 0 && date->year % 100 != 0)
                || date->year % 400 == 0) {
            return 29;
        }
    } else
        return days[date->month - 1];
}

void update_date(struct date *current)
{
    if (current->day == number_of_days(current)) {
        current->day = 1;
        if (current->month == 12) {
            current->month = 1;
            ++current->year;
        }
    } else
        ++current->day;
}

void print_date(struct date *d)
{
    printf("%i/%i/%i\n", d->day, d->month, d->year);
}

int main(void)
{
    struct date d1 = { .day = 21, .month = 2, .year = 2015 };
    struct date d2 = { .day = 28, .month = 2, .year = 2008 };
    struct date d3 = { .day = 31, .month = 3, .year = 2014 };
    struct date d4 = { .day = 31, .month = 12, .year = 2017 };

    struct date *d1p = &d1;
    struct date *d2p = &d2;
    struct date *d3p = &d3;
    struct date *d4p = &d4;

    print_date(d1p);
    update_date(d1p);
    print_date(d1p);

    print_date(d2p);
    update_date(d2p);
    print_date(d2p);

    print_date(d3p);
    update_date(d3p);
    print_date(d3p);

    print_date(d3p);
    update_date(d3p);
    print_date(d3p);

    return 0;
}
