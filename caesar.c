#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //checking the number of command line arguments
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1; 
    }
    
    //Validating the Key
    for (int i = 0; argv[1][i] != '\0'; i++)
    {    
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
            
        }
    }

    //converting the key from string to int
    int key = atoi(argv[1]);
        
        
    //geting the plaintext
    string plaintext = get_string("plaintext: ");
        
    //converting plaintext to ciphertext
    for (int i = 0; plaintext[i] != '\0'; i++)
    {
        //incresing by key step by step
        for (int j = 0; j < key; j++)
        {
            if ((plaintext[i] >= 'A' && plaintext[i] <= 'Z') || (plaintext[i] >= 'a' && plaintext[i] <= 'z'))
            {
                plaintext[i]++;
            
                if (plaintext[i] == 91 || plaintext[i] == 97)
                {
                    plaintext[i] = 'A';
                }
            
                if (plaintext[i] == 123)
                {
                    plaintext[i] = 'a';
                }
            }
        }
    }
        
    //printing the ciphertext
    printf("ciphertext: %s\n", plaintext);
    return 0;
    
}





/*
plaintext[i] >= 'a' && plaintext[i] <= 'z'

plaintext[i] > 122
*/