#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{   
    float f;
    do 
    {
       f = get_float("How much change is owed: ");  
    }
    // while the number is less than 0 we will ask for user's input 
    while (f < 0);
           
    int c = round(f * 100); // c equals f multiply by 100 to represnt cents
    
    int coin = 0;
      while (c >= 25) // 25 represent the quarter
    {
        c -= 25;
        coin++;
    }
    
      while (c >= 10) // 10 represent the dime
    {
        c -= 10;
        coin++;
    }
    
        while (c >= 5) // 5 represent the nickel
    {
        c -= 5;
        coin++;
    }
    
        while (c >= 1) // 1 represent the penny
    {
        c -= 1;
        coin++;
    }
    printf("%i\n", coin);
}