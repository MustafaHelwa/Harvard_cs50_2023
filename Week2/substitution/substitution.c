#include <cs50.h>
#include <string.h>
#include <stdio.h>

string keyChecker (string xVal);

int main (int argc, string argv[])
{
    string key;
    key = keyChecker (argv[1]);
}

string keyChecker (string xVal)
{
    if (strlen(sxVal) < 26)
    {
        printf("Key must contain 26 characters.");
        return (string) 1;
    }

}