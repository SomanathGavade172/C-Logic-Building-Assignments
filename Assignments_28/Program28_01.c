/* 
    1. Write a program which accepts a string from user and converts it into lower case.

    Input  : “Marvellous Multi OS”
    Output : marvellous multi os
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : strlwrX
//  Description    : This function converts all uppercase characters of the given string into lowercase.
//  Input          : String (character array)
//  Output         : None (Modifies string in place)
//  Author         : Gavade Somanath Vilas
//  Date           : 25/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function definition
void strlwrX(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        str++;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : String to Lowercase Conversion
//  Description      : This application accepts a string from user, converts it into lowercase, and displays the modified string.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30];

    printf("Enter a String : \n");
    scanf("%[^'\n]s", Arr);

    strlwrX(Arr);       // Function Call

    printf("Modified string is : %s\n", Arr);

    return 0;
}