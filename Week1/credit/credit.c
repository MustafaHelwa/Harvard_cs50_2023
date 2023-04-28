#include <cs50.h>
#include <stdio.h>

int main(void)
{
    do
    {
        long num = get_long("Number: \n");
    }
    while(num < 0);

}