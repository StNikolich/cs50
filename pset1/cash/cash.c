#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float change;
    // Get positive float number
    do
    {
        printf("O hai! How much change is owed?\n");
        change = get_float();
    }
    while (change < 0);
    // Round to cents
    int cents = round(change * 100);
    // Count 25 cents
    int count25 = (cents - (cents % 25)) / 25;
    cents -= count25 * 25;
    // Count 10 cents
    int count10 = (cents - (cents % 10)) / 10;
    cents -= count10 * 10;
    // Count 5 cents
    int count5 = (cents - (cents % 5)) / 5;
    cents -= count5 * 5;
    // Print count coins
    printf("%i\n", count25 + count10 + count5 + cents);
}