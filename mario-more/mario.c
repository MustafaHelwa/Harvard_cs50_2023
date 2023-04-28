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


    //Writing hash loop
    for(int i = 1; i <= height; i++)
    {
        int row = height;
        do
        {
            printf(".");
            row--;
        }
        while(row > 1);

    }

    printf("#  # \n");


}