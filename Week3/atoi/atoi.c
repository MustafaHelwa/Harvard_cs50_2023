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
    int num;
    int i = 0;
    string trans;

    //break value if the input reached the last NULL value '\0'
    if (input[i] == '\0')
        {
            return 0;
        }

    trans = input[i] - '0';

    convert (trans);

    num = (num * 10) + (int) trans;
    i++;

    return num;


}