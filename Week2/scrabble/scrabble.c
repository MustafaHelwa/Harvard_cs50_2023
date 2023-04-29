#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }

}

int compute_score(string word)
{
    // TODO: Compute and return score for string
    int score = 0;

    // TODO: Assigning capital value for all char or 0 if not letter
    for (int i = 0; i < strlen(word); i++)
    {
        char n = word[i];

        if (isupper(n))
        {
            n = (int) word[i];
        }
        if (islower(n))
        {
            n = (int) word[i] - 32;
        }
        else
        {
            n = 0;
        }

    //checking line:        printf("N value: %c\n", n);                     //Use %i to check char value ... A is 65

    // TODO: Counting score based on POINTS array
        if (n != 0)
        {
            score += POINTS[n - 65];                    // n will be char value from 65 to 90 (26 number) Points array starts from 0; eg. 65-65
        }

    }

    return score;
}
