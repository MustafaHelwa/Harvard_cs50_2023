#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

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
        printf ("Key must contain 26 characters.\n");
        return 1;
    }
    else
    {
        for (int i = 0; i < keylength; i++)
        {
            char keyentry = (char) keyvalue[i];
            if (isalpha(keyentry) == 0)
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

    for (int i = 0; i < strlen(tobedonetext); i++)
    {
         char charchecker = tobedonetext[i];

        if (isalpha(charchecker) != 1)
        {
            if (islower(charchecker) != 1)
            {
                int place = (int) tobedonetext[i] - 97;
                tobedonetext[i] =  key [place];
            }
            else
            {
                int place = (int) tobedonetext[i] - 65;
                printf("check");
                tobedonetext[i] =  key [place];
            }
        }

    }
    return tobedonetext;
}