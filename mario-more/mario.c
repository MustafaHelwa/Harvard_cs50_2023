#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    //Getting hight value between 1 and 8 only
    do
    {
        height = get_int("Height: ");
    }
    while(height < 1 || height > 8);


    //making first row spaces:

    int row = 1;

    for (int counter = height - row; counter < 1 ; counter++)
    {
        printf(".");
    }

}