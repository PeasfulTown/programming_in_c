#include <stdio.h>

struct time {
    int hours;
    int minutes;
    int seconds;
};

struct time elapsed_time(struct time time1, struct time time2);

int main(void)
{
    struct time times1[4] = {
        { 3, 17, 45 }, { 11, 4, 33 }, { 8, 45, 0 }, { 5, 59, 59 }
    };
    struct time times2[4] = {
        { 7, 52, 10 }, { 14, 28, 57 }, { 23, 59, 59 }, { 6, 0, 0 }
    };
    int i;
    struct time elapsed;

    for (i = 0; i < 4; ++i) {
        elapsed = elapsed_time(times1[i], times2[i]);
        printf("%.2i:%.2i:%.2i and %.2i:%.2i:%.2i diff = %.2i:%.2i:%.2i\n",
                times1[i].hours, times1[i].minutes, times1[i].seconds,
                times2[i].hours, times2[i].minutes, times2[i].seconds,
                elapsed.hours, elapsed.minutes, elapsed.seconds);
    }

    return 0;
}

struct time elapsed_time(struct time time1, struct time time2)
{
    struct time elapsed;

    elapsed.seconds = time2.seconds - time1.seconds;
    elapsed.minutes = time2.minutes - time1.minutes;
    elapsed.hours = time2.hours - time1.hours;

    if (elapsed.seconds < 0) {
        elapsed.seconds += 60;
        --elapsed.minutes;
    }

    if (elapsed.minutes < 0) {
        elapsed.minutes += 60;
        --elapsed.hours;
    }
    
    if (elapsed.hours < 0)
        elapsed.hours += 24;

    return elapsed;
}
