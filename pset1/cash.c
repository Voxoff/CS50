#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float num;
    do
    {
        num = get_float("How much? ");
    }
    while (num < 0);
    int amount = roundf(num * 100);
    int coins = 0;
    if (amount >= 25)
    {
        coins += amount / 25;
        amount = amount % 25;
    }
    if (amount >= 10)
    {
        coins += amount / 10;
        amount = amount % 10;
    }
    if (amount >= 5)
    {
        coins += amount / 5;
        amount = amount % 5;
    }
    if (amount >= 1)
    {
        coins += amount / 1;
        amount = amount % 1;
    }
    printf("%d\n", coins);
    return 0;
}
