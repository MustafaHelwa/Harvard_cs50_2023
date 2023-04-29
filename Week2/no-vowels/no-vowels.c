// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>

char replacew (char x);


int main(int argc, string argv[])
{
    string leet[argc];

    for (int i = 0; i < argc; i++)
    {
    leet[i] = replacew ((char) argv[i]);
    }

    for (int i = 0; i < argc; i++)
    {
        printf(" %s \n", leet[i]);
    }
}


char replacew (char x[])
{
    switch (x)
    {
        case 'a':
            printf("4");
            break;
        case 'b':
            printf("8");
            break;
        default:
            print("%s", x);
            break;
    }
    return x;
}