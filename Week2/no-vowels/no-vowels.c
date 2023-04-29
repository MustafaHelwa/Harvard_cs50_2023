// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    string leet[argc];

    for (int i = 0; i < argc; i++)
    {
        leet[i] = argv[i];
    }


    for (int i = 0; i < argc; i++)
    {

        switch( leet[i])
        {
            case 'a' || 'A':
                leet[i] = 4;

            case 'b' || 'B':
                leet[i] = 8;

            default:
                break;
        }
        printf(" %s \n", argv[i]);
    }

    for (int i = 0; i < argc; i++)
    {
        printf(" %s \n", leet[i]);
    }
}
