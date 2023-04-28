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
    else
        {


        /////////////////////implementing Luhn’s algorithm//////////////////////////

        //storing variables

        long i = 10;
        int rem1=0, rem2 = 0;
        long new_num = num;
        int counter = 0;

        do
        {
            int counter_val = counter %2;
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
        }
        while(new_num > 0);

        int val_num = ((rem2 * 2) + rem1) ;

        printf("remvalue: %i\n", val_num); 

        if( val_num % 20 == 0)
        {
            printf("VALID Card\n");
        }
        else
        {
            printf("INVALID2\n");
        }

    }

}