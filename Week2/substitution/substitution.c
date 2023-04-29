#include <cs50.h>
#include <string.h>
#include <stdio.h>

bool keyChecker1 (string keyvalue, int keylength);
string processedtext (string tobedonetext);

string key;

int main (int argc, string argv[])
{
    key = argv[1];
    bool check1 = keyChecker1 (key, strlen(key));

    if (check1 == 1)
    {
// empty to stop the code if the key is not acceptable
    }
    else
    {
        string plaintext = get_string ("plaintext: ");
        string ciphertext = processedtext (plaintext);

        printf("ciphertext: %s\n", ciphertext);

    }
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
                    if(keyentry == (char) keyvalue[j] && i != j)
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


string processedtext (string tobedonetext)
{
    char planetextchar;

    for (int i = 0; i < strlen(tobedonetext); i++)
    {
        if (((char)tobedonetext[i] > 96 && (char)key[i] > 96) || ((char)tobedonetext[i] < 96 && (char)key[i] < 96))
        {
            tobedonetext[i] = key[i];
        }
    }
    return tobedonetext;
}