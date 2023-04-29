#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

bool keyChecker1(string keyvalue, int keylength);
string processedtext(string tobedonetext);

string key;                                     //global variable since it will be used in all below functions

//##########################################################################//
//##################         Main code functions          ##################//
//##########################################################################//
int main(int argc, string argv[])
{
    if (argc < 2 || argc > 2)
    {
        printf("Usage: ./substitution key");
        return 1;
    }
    else
    {
        key = argv[1];
        bool check1 = keyChecker1(key, strlen(key));

        if (check1 == 1)
        {
// empty to stop the code if the key is not acceptable
            return 1;
        }
        else
        {
            string plaintext = get_string("plaintext: ");
            string ciphertext = processedtext(plaintext);

            printf("ciphertext: %s\n", ciphertext);

        }
    }
}


//##########################################################################//
//##################        key checking function         ##################//
//##########################################################################//

bool keyChecker1(string keyvalue, int keylength)
{
    if (keylength != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
    else
    {
        for (int i = 0; i < keylength; i++)
        {
            char keyentry = (char) keyvalue[i];
            if (isalpha(keyentry) == 0)
            {
                printf("Key must only contain alphabetic characters.\n");
                return 1;
            }
            else
            {
                for (int j = 0; j < keylength; j++)
                {
                    if (keyentry == (char) keyvalue[j] && i != j)
                    {
                        printf("Key must not ccontain repeated characters.\n");
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

//##########################################################################//
//##################         processing function          ##################//
//##########################################################################//
string processedtext(string tobedonetext)
{
//getting the length of plaintext that will be processed

    int length = strlen(tobedonetext);

//starting for loop to check and adjust the code value
    for (int i = 0; i < length; i++)
    {

        int tester = (int) tobedonetext[i];                 //integer to check the character of the array value

        if (islower(tester) != 0)                           //small will be - 97 since a is 97 and it will be 0 in key array
        {
            int place = (int) tobedonetext[i] - 97;
            tobedonetext[i] =  tolower(key [place]);        //tolower() will make sure that it is lower
        }
        else if (isupper(tester) != 0)                      //repeated with upper case instead of lower
        {
            int place = (int) tobedonetext[i] - 65;
            tobedonetext[i] =  toupper(key [place]);
        }
        else if (isalpha(tester) == 0)                      //if it is neither upper nor lower it shouldn't be an alphabit char
        {
            tobedonetext[i] = tobedonetext[i];              //getting the same char value
        }

    }
    return tobedonetext;                                    //return encrypted line
}