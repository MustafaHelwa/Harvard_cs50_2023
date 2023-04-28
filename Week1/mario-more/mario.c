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
    while (height < 1 || height > 8);


    int row = 1;    //starting with row 1
    int counter;    //counter for using it later for loops

    //starting the whole loop for height
    do
    {
        //spacing based on the height and row
        for (counter = height - row; counter > 0; counter--)
        {
            printf(" ");
        }

        //hashing based on the height and row
        for (counter = row; counter > 0; counter--)
        {
            printf("#");
        }

        printf("  ");   //duble spacing the triangle

        //hashing based on the height and row - repeated
        for (counter = row; counter > 0; counter--)
        {
            printf("#");
        }

        //moving to the next row
        printf("\n");

        //adding value to row counter
        row++;
    }
    while (row < height + 1);

}