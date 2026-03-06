/* 
    2. Write a program which accept string from user and copy that characters of that string into another string by removing all white spaces.

        Input : Marvel lous Pyth on

        Output : MarvellousPython
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : StrCpyX
//  Description    : This function accepts a string and copies its characters into another string by removing white spaces.
//  Input          : String (source), String (destination)
//  Output         : None (Modified string is stored in destination string)
//  Author         : Gavade Somanath Vilas
//  Date           : 06/03/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void StrCpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src != ' ')
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : String Copy Without White Spaces
//  Description      : This application copies characters of a given string into another string after removing all white spaces.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30] = "Marvel lous Pyth on";
    char Brr[30];

    StrCpyX(Arr, Brr);

    printf("%s\n", Brr);

    return 0;
}