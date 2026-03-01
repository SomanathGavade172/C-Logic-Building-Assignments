/* 
    3.Write a program which accept string from user and accept one character. Return index of first occurrence of that character.

    Input : "Marvellous Multi OS"
             M
    Output : 0

    Input : "Marvellous Multi OS"
             W
    Output : -1

    Input : "Marvellous Multi OS"
            e
    Output : 4

*/
#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : FirstIndex
//  Description    : This function accepts a string and a character. It returns the index of the first occurrence of the given character in the string.
//  Input          : String (character array), Character
//  Output         : Integer (Index of first occurrence) Returns -1 if character not found
//  Author         : Gavade Somanath Vilas
//  Date           : 01/03/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int FirstIndex(char *str, char Ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == Ch)
        {
            return iCnt;
        }

        iCnt++;
        str++;          // Move pointer to next character
    }

    return -1;          // Character not found
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : First Occurrence Finder
//  Description      : This application accepts a string and a character from the user and returns the index of the first occurrence of that character in the string.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter a String : \n");
    scanf("%[^'\n']s", Arr);     // Accept full string with spaces

    printf("Enter a Character : \n");
    scanf(" %c", &cValue);

    iRet = FirstIndex(Arr, cValue);

    printf("Character location is : %d\n", iRet);

    return 0;
}