/*
    4. Write a program which accept string from user and copy that characters of that string into another string by converting all capital characters into small case.

        Input : "Marvellous Python 2"

        Output : "marvellous python 2"

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : StrCpySmall
//  Description    : This function accepts a string and copies its characters into another string by converting all capital characters into small case.
//  Input          : String (source), String (destination)
//  Output         : None (Modified string is stored in destination string)
//  Author         : Gavade Somanath Vilas
//  Date           : 06/03/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void StrCpySmall(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src >= 'A' && *src <= 'Z')
        {
            *dest = *src + 32;
        }
        else
        {
            *dest = *src;
        }
        dest++;
        src++;
    }

    *dest = '\0';
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : String Copy with Small Conversion
//  Description      : This application copies characters of a given string into another string by converting all capital characters into small case.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30];
    char Brr[30];

    printf("Enter a String : \n");
    scanf("%[^\n]", Arr);

    StrCpySmall(Arr, Brr);

    printf("%s\n", Brr);

    return 0;
}