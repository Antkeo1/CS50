#include <cs50.h>
#include <stdio.h>

int main(void)
{   
   int h = get_int("Height between 1 and 8: ");
    int w = h + 1;
    printf("Height: %i\n", h);
    for (int j = 0; j < h; j++) 
    {
       for (int s = 0; s < h - 1 - j; s++) 
       {
           printf(" ");
       }
        for (int k = 0; k < j + 1; k++) 
        {
             printf("#"); 
        }
         
      printf("\n");
       
    }
}