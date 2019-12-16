#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{    
      if(argc != 2)
      {    
          printf("Usage: ./caesar key\n");
          return 1;
      }
    
    int k = atoi(argv[1]);
    if(k < 0)
    {
        printf("Hey use a non-negative number\n");
        return 1;
    }
    
    string plaintext = get_string("plaintext: ");
    for (int i = 0, length = strlen(plaintext); i < length; i++)
    {
        if (islower(plaintext[i]))
        {
          printf("%c", (plaintext[i] - 'a' + k) % 26 + 'a');

        } 
        else if isupper(plaintext[i])
        {
            printf("%c", (plaintext[i] - 'A' + k) % 26 + 'A');
        } 
        else 
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
        
}