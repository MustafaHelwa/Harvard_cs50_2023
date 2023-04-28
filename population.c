#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    float start;
    do
    {
        start = get_float ("Starting size: ");
    }
    while (start < 9);

    // TODO: Prompt for end size
    float end;
    do
    {
        end = get_float ("Ending size: ");
    }
    while (end < start);

    // TODO: Calculate number of years until we reach threshold
    int years = 0;

    while (start < end)
    {
        start += start / 12;
        years++;
    }

    // TODO: Print number of years
    printf ("Years: %i\n", years);
}
