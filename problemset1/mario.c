#include <cs50.h>
#include <stdio.h>

int main(void)
{   
    int h;
   do 
   {
       h = get_int("Height between 1 and 8: ");
    }
    while (h < 0 || h > 8);
         
    
    for (int j = 0; j < h; j++) 
    {
       for (int s = 0; s < h - 1 - j; s++) 
       {
           printf(" ");
       }
        
        for (int k = 0; k < j + 2; k++) 
        {
             printf("#"); 
        }
         
      printf("\n");
       
    }
   
}



