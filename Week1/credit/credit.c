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


        ///////////////////// implementing Luhn’s algorithm //////////////////////////

        //storing variables

        long i = 10;
        int rem1=0, rem2 = 0;
        long new_num = num;
        int counter = 0;
        int dummy_rem;
        int MasterCheck;

        do
        {
            dummy_rem = new_num % i;

            if (counter % 2 == 0)
            {
                rem1 += (dummy_rem) ;


            }
            else
            {
                if(dummy_rem >4)
                {
                    rem2 += (dummy_rem*2 % 10) + 1;
                }
                else
                {
                    rem2 += dummy_rem * 2;
                }
            }
            new_num /= 10;
            counter++;
            if (new_num > 10 && new_num < 99)
            {
                MasterCheck = new_num;
            }
        }
        while(new_num > 0);


        ///////////////////// Card validity //////////////////////////
        int val_num = (rem1 + rem2) ;

        if( val_num % 20 == 0)
        {
//            printf("VALID Card\n");       uncomment if validation needed

            if(counter == 15)
            {
                printf("American Express\n");
            }
            else if (counter == 13 && dummy_rem == 4)
            {
                printf("Visa\n");
            }
            else if (counter == 16)
            {
                if (dummy_rem == 4)
                {
                    printf("Visa\n");
                }
                else if (MasterCheck >= 51 && MasterCheck <= 55)
                {
                    printf("MasterCard\n");
                }
            }
        }
        else
        {
            printf("INVALID\n");            //change it to INVALID2 to check if it passed the first validation @ Line 19
        }

    }


}