/*
    2.Write a program which accept string from user and accept one character. Return frequency of that character.

    Input : "Marvellous Multi OS"

            M

    Output : 2

    Input : "Marvellous Multi OS"

            W

    Output : 0
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Count
//  Description    : This function returns the frequency of the given character in the string.
//  Input          : String (character array), Character
//  Output         : Integer (Frequency of character)
//  Author         : Gavade Somanath Vilas
//  Date           : 27/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function definition
int Count(char *str, char ch)  
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Character Frequency Counter
//  Description      : This application accepts a string and a character from user and returns the frequency of that
//                     character in the string.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30];
    int iRet = 0;
    char cValue = '\0';

    printf("Enter string : \n");
    scanf("%[^\n]", Arr);

    printf("Enter the character :\n");
    scanf(" %c", &cValue);

    iRet = Count(Arr, cValue);  

    printf("Character frequency is : %d", iRet);

    return 0;
}