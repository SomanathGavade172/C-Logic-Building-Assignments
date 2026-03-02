/* 
    1. Accept Character from user and check whether it is alphabet or not (A-Z a-z).

    Input  : F
    Output : TRUE

    Input  : &
    Output : FALSE

*/

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : ChkAlpa
//  Description    : This function accepts one character and checks whether the given character is an alphabet or not.
//  Input          : Character
//  Output         : TRUE  - If character is alphabet, FALSE - If character is not alphabet
//  Author         : Gavade Somanath Vilas
//  Date           : 02/03/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkAlpa(char Ch)
{
    if((Ch >= 'A' && Ch <= 'Z') || (Ch >= 'a' && Ch <= 'z'))
    {
        return TRUE;
    }

    return FALSE;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Alphabet Checker
//  Description      : This application accepts one character from the user and checks whether the character is an alphabet or not.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter a Character : \n");
    scanf("%c", &cValue);

    bRet = ChkAlpa(cValue);

    if(bRet == TRUE)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return 0;
}