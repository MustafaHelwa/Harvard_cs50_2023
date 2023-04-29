// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <string.h>         // for strlen code in line 16
#include <stdio.h>

char replace(char vowel);

int main(int argc, string argv[])
{
    char new_vowel;         //that will be used in replace function

    for (int i = 0; i < strlen(argv[1]) ; i++)
    {
        new_vowel = replace((char) argv[1][i]);     // replacing the vowel in replace function

    }

    printf("\n");
}

/////////////////// replace function with running with each char
char replace(char vowel)
{

// switch function with break and return of the same value if needed
    switch (vowel)
    {
        case 'a':
            printf("6");
            vowel = '6';
            break;

        case 'e':
            printf("3");
            vowel = '3';
            break;

        case 'i':
            printf("1");
            vowel = '1';
            break;

        case 'o':
            printf("0");
            vowel = '0';
            break;

        default:
            printf("%c", vowel);
            break;
    }

    return vowel;       // return eith edited vowels or orginal non-vowel char
}