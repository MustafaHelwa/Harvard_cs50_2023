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
    int len = strlen(input);
    int i = 0;

    //if input is only one digit
    if (len == 1)
    {
        return input[i] - '0';
    }

    //else

    for (int j = 0; j < len; j++)
    {
        if (j < len)
        {
            input[j] = input[j];
        }

        if (j == len - 1)
        {
            input[j] = '\0';
        }
    }
    i++;

    return (10 * convert (input) + input [len - 1] - '0');


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