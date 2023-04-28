#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    //getting hight value between 1 and 8 only
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    for(int i=0; i < height; i++)
    {
        printf("#  #\n");
    }

}