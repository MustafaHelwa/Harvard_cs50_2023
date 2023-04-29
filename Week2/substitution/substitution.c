#include <cs50.h>
#include <string.h>
#include <stdio.h>

string keyChecker1 (string key);


int main (int argc, string argv[])
{
    key = key[argc]
    string check1 = keyChecker1 (argv);
    printf("%s \n", check1);

}

//26 letter checker

string keyChecker1 (key)
{
    int keylength = strlen(key);

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