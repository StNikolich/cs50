#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

// Function declaration
int get_decrypt_char(char encrypt_char, int k);

int main(int argc, string argv[])
{
    // Check if have argument - secret_text
    if (argc != 2)
    {
        printf("Usage: ./decrypt_caesar secret_text\n");
        return 1;
    }
    string secret = argv[1];
    int lenght = strlen(secret);
    printf("Secret text: %s\n", secret);
    // Loop for 26
    for (int k = 1; k <= 26; k++)
    {
        printf("Key k=%i, Decrypt text=", k);
        // Loop for decrypt
        for (int i = 0; i < lenght; i++)
        {
            printf("%c", get_decrypt_char(secret[i], k));
        }
        printf("\n");
    }
}

// Function decrypt char via number ASCII code
int get_decrypt_char(char encrypt_char, int k)
{
    if (isalpha(encrypt_char))
    {
        int ascii_start_number = isupper(encrypt_char) ? 65 : 97;
        return (((encrypt_char % ascii_start_number) + k) % 26) + ascii_start_number;
    }
    else
    {
        return encrypt_char;
    }
}