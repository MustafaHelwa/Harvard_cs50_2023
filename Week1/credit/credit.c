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

    long i = 10;
    int second_to_last;
    int second_to_last_total = 0;
    long new_num = num;

    do
    {
        second_to_last = new_num % i;
        second_to_last_total += second_to_last;
        new_num -= second_to_last;

        printf("del: %li. Second to last now: %i. new number: %li\n", i, second_to_last, new_num);

    }
    while(new_num > 0);


}