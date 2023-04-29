// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <string.h>
#include <stdio.h>

char replace (char vowel);

int main(int argc, string argv[])
{
    char new_vowel;

    for (int i = 0; i < strlen(argv[1]) ; i++)
    {
        new_vowel = replace ((char) argv[1][i]);

    }

    printf("\n");
}


char replace (char vowel)
{
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

    return vowel;
}