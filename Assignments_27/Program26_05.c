/* 
    5. Accept character from user and display its ASCII value in decimal, octal and hexadecimal format.

        Input  :    A
        
        Output : 
                    Decimal     :  65
                    Octal       :  0101
                    Hexadecimal :  0X41

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : DisplayASCIIValue
//  Description    : This function accepts one character from user and displays its ASCII value in Decimal, Octal and Hexadecimal format.
//  Input          : Character
//  Output         : Displays ASCII value in different number formats
//  Author         : Gavade Somanath Vilas
//  Date           : 19/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// Function Definition
void DisplayASCIIValue(char ch)
{
    printf("Decimal     : %d\n", ch);

    printf("Octal       : 0%o\n", ch);

    printf("Hexadecimal : 0X%X\n", ch);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : ASCII Value Display
//  Description      : This application accepts one character from user and displays its ASCII value in Decimal, Octal and Hexadecimal representation.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter the character : \n");
    scanf("%c", &cValue);

    DisplayASCIIValue(cValue);          // Function Call

    return 0;
}
