#include <cs50.h>
#include <string.h>
#include <stdio.h>

bool keyChecker1 (string keyvalue, int keylength);


int main (int argc, string argv[])
{
    string key = argv[1];
    bool check1 = keyChecker1 (key, strlen(key));

    if (check1 == 1)
    {
        break; 
    }
    string plaintext = get_string("plaintext: \n");
    string ciphertext = get_string("ciphertext: \n");

}

//26 letter checker

bool keyChecker1 (string keyvalue, int keylength)
{
    if (keylength != 26)
    {
        printf ("Key must contain 26 characters. %i\n", keylength);
        return 1;
    }
    else
    {
        for (int i = 0; i < keylength; i++)
        {
            char keyentry = (char) keyvalue[i];
            if (keyentry < 65 || keyentry > 123 || (keyentry > 90 && keyentry < 97))
            {
                printf ("Key must only contain alphabetic characters.\n");
                return 1;
            }
            else
            {
                for (int j = 0; j < keylength; j++)
                {
                    if(keyentry == (char) keyvalue[j])
                    {
                        printf ("Key must not ccontain repeated characters.\n");
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}