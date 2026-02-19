/* 
    4. Accept Character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *).

        Input  : %
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
//  Function Name  : CheckSpecialSymbol
//  Description    : This function accepts one character from user and checks whether it is a special symbol or not. Special symbols are : !, @, #, $, %, ^, &, *
//                   If the character matches any of these symbols, it returns TRUE otherwise it returns FALSE.
//  Input          : Character
//  Output         : Boolean Value (TRUE / FALSE)
//  Author         : Gavade Somanath Vilas
//  Date           : 19/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL CheckSpecialSymbol(char Ch)
{
    if((Ch == '!') || (Ch == '@') || (Ch == '#') || (Ch == '$') || (Ch == '%') || (Ch == '^') || (Ch == '&') || (Ch == '*'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }   
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Special Symbol Checker
//  Description      : This application accepts one character from user and checks whether it is a special symbol
//                     (!, @, #, $, %, ^, &, *) or not.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char CValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter a Character : \n");
    scanf("%c", &CValue);

    bRet = CheckSpecialSymbol(CValue);

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
