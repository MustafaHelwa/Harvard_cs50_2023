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
        leet[2][i] = argv[2][i];
    }


    for (int i = 0; i < argc; i++)
    {
        switch( leet[2][i])
        {
            case 'a':
                printf("4");
                break;

            case 'b':
                printf("8");
                break;

            default:
                printf("\ndef\n");
                break;

        }
        printf(" %s \n", argv[i]);
    }

    for (int i = 0; i < argc; i++)
    {
        printf(" %s \n", leet[i]);
    }
}
