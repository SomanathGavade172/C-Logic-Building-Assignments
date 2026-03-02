/*
    4. Accept Character from user and check whether it is small case or not (a-z).
    
    Input  : g
    Output : TRUE

    Input  : D
    Output : FALSE

*/

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : ChkSmall
//  Description    : This function accepts one character and checks whether the given character is a small case alphabet or not.
//  Input          : Character
//  Output         : TRUE  - If character is small case alphabet, FALSE - If character is not small case alphabet
//  Author         : Gavade Somanath Vilas
//  Date           : 02/03/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkSmall(char Ch)
{
    if(Ch >= 'a' && Ch <= 'z')
    {
        return TRUE;
    }

    return FALSE;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Small Case Character Checker
//  Description      : This application accepts one character from the user and checks whether the character is a small case alphabet or not.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter a Character : \n");
    scanf("%c", &cValue);

    bRet = ChkSmall(cValue);

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