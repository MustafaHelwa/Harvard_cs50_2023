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
        leet[0][i] = argv[2][i];

        char x = (char) leet[2][i];
        switch (x)
        {
            case 'a':
                printf("4");
                break;

            case 'e':
                printf("3");
                break;

            case 'o':
                printf("0");
                break;

            case 'u':
                printf("v");
                break;

            case 'i':
                printf("!");
                break;

            default:
                printf("%s \n", leet[i]);
                break;
        }

    }

    for (int i = 0; i < argc; i++)
    {
        printf(" %s \n", leet[i]);
    }
}
