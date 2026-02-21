/* 
    1. Write a program which displays ASCII table. Table contains Symbol, Decimal, Hexadecimal and Octal representation 
       of every member from 0 to 255.
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : DisplayASCII
//  Description    : This function displays the complete ASCII table from 0 to 255. It prints the Symbol, Decimal, Hexadecimal, and Octal values.
//                   Non-printable characters are shown as '.'.
//  Input          : None
//  Output         : None (Displays ASCII table on console)
//  Author         : Gavade Somanath Vilas
//  Date           : 18/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
void DisplayASCII()
{
    int iCnt = 0;
    unsigned char ch = '\0';

    printf("Symbol\tDecimal\tHexadecimal\tOctal\n");
    printf("-------------------------------------------------\n");

    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        ch = iCnt;

        if(ch >= 32 && ch <= 126)   // Printable ASCII range
        {
            printf("%c\t", ch);
        }
        else
        {
            printf(".\t");
        }

        printf("%d\t\t", iCnt);
        printf("%#X\t\t", iCnt);
        printf("%#o\n", iCnt);
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : ASCII Table Display
//  Description      : This application prints the ASCII table for all values from 0 to 255 with Symbol, Decimal, Hexadecimal, and Octal formats.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    DisplayASCII();     // Function Call
    
    return 0;
}
