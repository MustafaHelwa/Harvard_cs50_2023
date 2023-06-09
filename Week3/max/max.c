// Practice writing a function to find a max value

#include <cs50.h>
#include <stdio.h>

int max(int array[], int n);

int main(void)
{
    int n;
    do
    {
        n = get_int("Number of elements: ");
    }
    while (n < 1);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = get_int("Element %i: ", i);
    }

    printf("The max value is %i.\n", max(arr, n));
}

// TODO: return the max value
int max(int array[], int n)
{

    //bubble sort in ascending order

    for (int i = 0; i < n - 1; i++)                 //making steps
    {
        for (int j = 0; j < n - i - 1; j++)         //each step is less than the last one
        {
            if (array[j] < array[j + 1])            //ascending order
            {
                int swapnumber = array[j];          //swap int
                array[j] = array[j + 1];
                array[j + 1] = swapnumber;
            }
        }
    }

    return array[0];                                //return the first value since it is ascending order. You can return [n - 1] for descending
}
