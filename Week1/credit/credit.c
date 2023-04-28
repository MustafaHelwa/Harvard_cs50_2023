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
    int rem1,rem2 = 0;
    long new_num = num;
    int counter = 1;

    do
    {
        if (counter % 2 == 0)
        {
            
            rem1 += new_num % i;
        }
        else
        {
            rem2 += new_num % i;
        }

        new_num /= 10;
        counter++;
        printf("Rem1: %i. Rem2: %i. New Number: %li\n", rem1,rem2, new_num);
    }
    while(new_num > 0);


}