#include <cs50.h>
#include <string.h>
#include <stdio.h>

bool keyChecker1 (string keyvalue, int keylength);


int main (int argc, string argv[])
{
    string key = argv[1];
    bool check1 = keyChecker1 (key, strlen(key));

    printf("%i \n", check1);

}

//26 letter checker

bool keyChecker1 (string keyvalue, int keylength)
{
    if (keylength != 26)
    {
        printf ("Key must contain 26 characters. %i\n", keylength);
        return 1;
    }
    else if
    {

        return 1;
    }
}