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

    do
        {
        for (int counter = height - row; counter > 0; counter--)
        {
            printf(".");
        }

        for (int counter = row; counter > 0; counter--)
        {
            printf("#");
        }

        printf("  ");

        for (int counter = row; counter > 0; counter--)
        {
            printf("#");
        }

        printf("\n");

        row++;
    }
    while(row < height);

}