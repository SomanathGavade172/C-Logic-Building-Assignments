/* 
    2. Accept Character from user and check whether it is capital or not (A-Z).

    Input  : F
    Output : TRUE

    Input  : d
    Output : FALSE

*/

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : ChkCapital
//  Description    : This function accepts one character and checks whether the given character is a capital alphabet or not.
//  Input          : Character
//  Output         : TRUE  - If character is capital alphabet, FALSE - If character is not capital alphabet
//  Author         : Gavade Somanath Vilas
//  Date           : 02/03/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkCapital(char Ch)
{
    if(Ch >= 'A' && Ch <= 'Z')
    {
        return TRUE;
    }

    return FALSE;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Capital Character Checker
//  Description      : This application accepts one character from the user and checks whether the character is a capital alphabet or not.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter a Character : \n");
    scanf("%c", &cValue);

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is Capital Character");
    }
    else
    {
        printf("It is not Capital Character");
    }

    return 0;
}