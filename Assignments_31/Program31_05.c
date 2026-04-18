#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : SrcCpyToggle
//  Description    : This function accepts a string and copies its characters into another string by toggling the case (capital to small and small to capital).
//  Input          : String (source), String (destination)
//  Output         : None (Modified string is stored in destination string)
//  Author         : Gavade Somanath Vilas
//  Date           : 06/03/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void SrcCpyToggle(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src >= 'A' && *src <= 'Z')
        {
            *dest = *src + 32;
        }
        else if(*src >= 'a' && *src <= 'z')
        {
            *dest = *src - 32;
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
//  Application Name : String Copy with Toggle Case
//  Description      : This application copies characters of a given string into another string by toggling the case.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{   
    char Arr[30];
    char Brr[30];

    printf("Enter a String : \n");
    scanf("%[^\n]", Arr);

    SrcCpyToggle(Arr, Brr);

    printf("%s\n", Brr);

    return 0;
}