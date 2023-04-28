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
            if (counter % 2 == 0)
            {
                int dummy_rem = new_num % i;
                if(dummy_rem*2 > 10)
                {
                    rem1 += ((dummy_rem % 10)*2) + 1;
                }
                else
                {
                    rem1 += ((new_num % i)*2) ;
                }


            }
            else
            {
                rem2 += new_num % i;
            }

            new_num /= 10;
            counter++;
            printf("rem1: %i. rem2: %i. Num: %li\n", rem1, rem2, new_num);
        }
        while(new_num > 10);

/*
        int val_num = ((rem2 * 2) + rem1) ;

        if( val_num % 20 == 0)
        {
            printf("VALID Card\n");
        }
        else
        {
            printf("INVALID2\n");
        }


*/
    }
}