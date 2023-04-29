#include <cs50.h>
#include <string.h>
#include <stdio.h>

bool keyChecker1 (string keyvalue, int keylength);


int main (int argc, string argv[])
{
    bool check1 = keyChecker1 (argv[1], argc);

    printf("%i \n", check1);

}

//26 letter checker

bool keyChecker1 (string keyvalue, int keylength)
{
    if (keylength != 26)
    {
        printf("Key must contain 26 characters. %i\n", keylength);
        return 1;
    }
    else
    {
        return 0;
    }
}