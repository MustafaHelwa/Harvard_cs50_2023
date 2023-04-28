#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //assigning card variable
    long num;

    //getting card number
    do
    {
        num = get_long("Number: ");
    }
    while(num < 1);

    //invalid card if less than 13 digit
    if (num < (1000000000000))
    {
        printf("INVALID\n");
    }



    /////////////////////implementing Luhn’s algorithm//////////////////////////

    //storing variables

    int i = 10;
    long second_to_last = 0;
    long second_to_last_total = 0;
    int val =0;
    do
    {
    second_to_last = num % i;
    second_to_last_total += second_to_last;

    printf("del: %lo. Second to last now: %lo.\n", i, second_to_last);

    i = i * 10;

    }
    while (i <10000000000000000);

}