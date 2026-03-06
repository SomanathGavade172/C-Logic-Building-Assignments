/*
    1. Write a program which accept string from user and copy that characters of that string into another string in reverse order.

    Input : Marvellous Python

    Output : nohtyP suollevraM
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : StrCpyX
//  Description    : This function accepts a string and copies its characters into another string in reverse order.
//  Input          : String (source), String (destination)
//  Output         : None (Reversed string is stored in destination string)
//  Author         : Gavade Somanath Vilas
//  Date           : 06/03/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void StrCpyX(char *src, char *dest)
{
    char *start = src;
    char *end = src;

    while(*end != '\0')
    {
        end++;
    }

    end--;

    while(start <= end)
    {
        *dest = *end;

        dest++;
        end--;
    }

    *dest = '\0';
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Reverse String Copy
//  Description      : This application copies characters of a given string into another string in reverse order.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30] = "Marvellous Python";
    char Brr[30];

    StrCpyX(Arr, Brr);

    printf("%s\n", Brr);

    return 0;
}