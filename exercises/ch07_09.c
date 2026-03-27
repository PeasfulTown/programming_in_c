#include <stdio.h>

int lcm(int u, int v);
int gcd(int u, int v);

int main(void)
{
    printf("lcm(15, 10) = %d\n", lcm(15, 10));
    printf("lcm(3, 9) = %d\n", lcm(3, 9));
    printf("lcm(1, 1) = %d\n", lcm(1, 1));
    printf("lcm(7, 13) = %d\n", lcm(7, 13));

    return 0;
}

int lcm(int u, int v)
{
    if (u < 0 && v < 0) {
        printf("u and/or v are negative\n");
        return 0;
    }

    return u * v / gcd(u, v);
}

int gcd(int u, int v)
{
    int temp;

    while (v != 0) {
        temp = u % v;
        u = v;
        v = temp;
    }

    return u;
}

