#include <stdio.h>


enum month {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

char *monthName(enum month m)
{
    char *name;
    switch (m) {
        case January:
            name = "January";
            break;
        case February:
            name = "February";
            break;
        case March:
            name = "March";
            break;
        case April:
            name = "April";
            break;
        case May:
            name = "May";
            break;
        case June:
            name = "June";
            break;
        case July:
            name = "July";
            break;
        case August:
            name = "August";
            break;
        case September:
            name = "September";
            break;
        case October:
            name = "October";
            break;
        case November:
            name = "November";
            break;
        case December:
            name = "December";
            break;
    }
    return name;
}

int main(void)
{
    enum month aMonth = February;
    printf("%s\n", monthName(aMonth));
    return 0;
}
