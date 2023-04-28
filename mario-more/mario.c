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
    int row = height;
    int count = height;
    int counter2 = 1;

    do
        {
        do
        {
            printf(".");
            row--;
        }
        while(row > 1);
        row = height - counter2;

        if(count - height < 1)
        {
            for(int i = count; i < height; i-- )
            printf("#");
        }

        printf("#  #");

        if(count - height < 1)
        {
            for(int i = count; i < height; i-- )
            printf("#");
        }

        printf("\n");
        count++;

    }
    while (count < height);


}