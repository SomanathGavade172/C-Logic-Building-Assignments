/* 
    3. Accept Character from user and check whether it is digit or not (0-9).
    
    Input  : 7
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
//  Function Name  : ChkDigit
//  Description    : This function accepts one character and checks whether the given character is a digit or not.
//  Input          : Character
//  Output         : TRUE  - If character is digit, FALSE - If character is not digit
//  Author         : Gavade Somanath Vilas
//  Date           : 02/03/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkDigit(char Ch)
{
    if(Ch >= '0' && Ch <= '9')
    {
        return TRUE;
    }

    return FALSE;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Digit Checker
//  Description      : This application accepts one character from the user and checks whether the character is a digit or not.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter a Character : \n");
    scanf("%c", &cValue);

    bRet = ChkDigit(cValue);

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