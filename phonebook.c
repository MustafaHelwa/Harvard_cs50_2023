
#include <cs50.h>
#include <stdio.h>

int main (void)
{
    string name = get_string("What is your name? ");
    int age = get_int("\nWhat is your age?");
    string number = get_string("\n What is your phone number? ");
    printf("Name is %s. Age is %i. Number is %s.\n", name, age, number);
}