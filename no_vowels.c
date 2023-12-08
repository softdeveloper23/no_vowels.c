#include "cs50.h"
#include <stdio.h>

string replace_vowels(string s);

int main(int argc, string argv[])
{
    // Make sure program was run with just one command-line argument
    if (argc != 2)
    {
        printf("Usage: ./no-vowels word\n");
        return 1;
    }
    printf("%s\n", replace_vowels(argv[1]));
}

string replace_vowels(string s)
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'a' || s[i] == 'A')
        {
            s[i] = '6';
        }
        else if (s[i] == 'e' || s[i] == 'E')
        {
            s[i] = '3';
        }
        else if (s[i] == 'i' || s[i] == 'I')
        {
            s[i] = '1';
        }
        else if (s[i] == 'o' || s[i] == 'O')
        {
            s[i] = '0';
        }
        else
        {
            s[i] = s[i];
        }
    }
    return s;
}