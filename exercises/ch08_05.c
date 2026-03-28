#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

struct time {
    int hours;
    int minutes;
    int seconds;
};

struct dateAndTime {
    struct date date;
    struct time time;
};

int getNumberOfDates(struct date d);
struct date dateUpdate(struct date d);
struct dateAndTime clockKeeper(struct dateAndTime dt);
struct time timeUpdate(struct time t);
void printDateAndTime(struct dateAndTime dt);

int main(void)
{
    struct date d[] = {
        { 15, 3, 2023 },
        { 28, 11, 2019 },
        { 1, 1, 2001 },
        { 1, 1, 2001 }
    };

    struct time t[] = {
        { 8, 22, 10 },
        { 23, 45, 0 },
        { 0, 0, 1 },
        { 23, 59, 59 }

    };

    struct dateAndTime dt[] = {
        { d[0], t[0] },
        { d[1], t[1] },
        { d[2], t[2] },
        { d[3], t[3] }
    };

    int i;

    for (i = 0; i < 4; ++i) {
        printDateAndTime(dt[i]);
        dt[i] = clockKeeper(dt[i]);
        printDateAndTime(dt[i]);
    }
        
    return 0;
}

void printDateAndTime(struct dateAndTime dt)
{
    printf("%.2i/%.2i/%i - %.2i:%.2i:%.2i\n",
            dt.date.day, dt.date.month, dt.date.year,
            dt.time.hours, dt.time.minutes, dt.time.seconds);
}

struct dateAndTime clockKeeper(struct dateAndTime dt)
{
    dt.time = timeUpdate(dt.time);

    if (dt.time.hours == 0 && dt.time.minutes == 0 && dt.time.seconds == 0)
        dt.date = dateUpdate(dt.date);

    return dt;
}

struct time timeUpdate(struct time t)
{
    ++t.seconds;

    if (t.seconds == 60) {
        t.seconds = 0;
        ++t.minutes;
        if (t.minutes == 60) {
            t.minutes = 0;
            ++t.hours;
            if (t.hours == 24)
                t.hours = 0;
        }
    }
    
    return t;
}

struct date dateUpdate(struct date d)
{
    ++d.day;

    if (d.day > getNumberOfDates(d)) {
        d.day = 1;
        if (d.month == 12) {
            d.month = 1;
            ++d.year;
        }
    }

    return d;
}

int getNumberOfDates(struct date d)
{
    const int numberOfDates[] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    if (d.month == 2) {
        if ((d.year % 4 == 0 && d.year % 100 != 0)
                || d.year % 400)
            return 29;
    } else 
        return numberOfDates[d.month - 1];
}
