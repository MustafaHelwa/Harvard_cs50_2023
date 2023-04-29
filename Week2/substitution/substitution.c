#include <cs50.h>
#include <string.h>
#include <stdio.h>

int keyChecker1 (int keylength);


int main (int argc, string argv[])
{
    int check1 = keyChecker1 (argc);
    printf("%i \n", check1);

}

//26 letter checker

int keyChecker1 (keylength)
{
    if (keylength != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
    else
    {
        return 0;
    }
}