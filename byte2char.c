// =================================================================================
// File: byte2char.c
// =================================================================================
// Programmer: Jennifer King
// Date: 2/13/2018
// Professor: Scott Edwards
// Class: CSCI 223F | TR 4:30PM
// Description:
//              This file will read a hexadecimal value from stdin and write it to
//              stdout in its ASCII character representation.
// =================================================================================

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int inChar;

    while((inChar = getchar()) != EOF)
    {
        scanf("%x", &inChar);
        printf("%c", inChar);
    }

    return 0;
}// end of main
