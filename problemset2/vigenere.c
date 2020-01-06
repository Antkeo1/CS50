#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
     if(argc != 2)
      {    
          printf("Usage: ./vigenere key\n");
          return 1;
      }
    
    string k = atoi(argv[1]);
    int keylength = strlen(k)
     for (int i = 0; i < keylength; i++)
     {
         if (!isalpha(k))
         {
             printf("invalid key\n")
             return 1;
         }
     }
    
    string plaintext = get_string("plaintext: ");
    printf("cyphertext: ")
    for (int i = 0, index = 0; length = strlen(plaintext); i < length; i++)
    {
        if(isalpha(plaintext[i]))
        {
            if (islower(plaintext[i]))
            {
              printf("%c", (plaintext[i] - 'a' + toupper(k[index]) - 'A') % 26 + 'a');
                index = (index + 1) % keylength
            } 
            else if isupper(plaintext[i])
            {
                printf("%c", (plaintext[i] - 'A' + toupper(k[index]) - 'A') % 26 + 'A');
            } 
            index = (index + 1) % keylength
          }

        else 
        {
            printf("%c", plaintext[i]);
        }
    }
   
    printf("\n");
}