#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int start;
    do
    {
        start = get_int ("Starting size: ");

    }
    while (start < 9);

    int end;
    do
    {
        end = get_int ("Ending size: ");
    }
    while (end < 0);

    int years = 0;
    while (start != end)
    {
        start += start / 12;
        years++;
    }

    printf ("Years: %i\n", years);
}