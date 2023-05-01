#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int convert(string input);

int main(void)
{
    string input = get_string("Enter a positive integer: ");

    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (!isdigit(input[i]))
        {
            printf("Invalid Input!\n");
            return 1;
        }
    }

    // Convert string to int
    printf("%i\n", convert(input));
}

int convert(string input)
{
    // TODO
    int i = 0;
    int n = strlen(input);

    if (strlen(input) == 1)
    {
        return input[i] - '0';
    }
    else if (strlen(input) > 1)
    {
        i++;

        input[n - 1] = '\0';

        return ((10 * convert (input)) + (input[n - i - 1] - '0'));
    }

    return 0;
}


// this code do the job without any Recursive function
/*
int convert(string input)
{
    // TODO
    int num = 0;
    int i = 0;

    //making itirations till the output is done
    //leave if the char is not a number

    while (input[i] && (input[i] >= '0' && input[i] <= '9'))
    {
        num = num * 10 + (input[i] - '0');
        i++;
    }

    //returns the final number
    return num;

}
*/