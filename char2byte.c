
// =================================================================================
// File: char2byte.c
// =================================================================================
// Programmer: Jennifer King
// Date: 2/13/2018
// Professor: Scott Edwards
// Class: CSCI 223F | TR 4:30PM
// Description:
//              This file copies chars from stdin to stdout, while rewriting chars in
//              hexadecimal format.
// =================================================================================

#include <stdio.h>

int main(void)
{
    auto int inChar;
    int counter = 1;

    while((inChar = getchar())!= EOF)
    {
        printf("%.2hhX", inChar);
        printf(" ");
        if(counter == 20)
        {
            printf("\n");
            counter = 0;
        }
        counter ++;
    }
    return 0;
}
