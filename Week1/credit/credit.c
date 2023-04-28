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

    int digit_1 = num % (10^1);

    printf("first: %i\n", digit_1);
}