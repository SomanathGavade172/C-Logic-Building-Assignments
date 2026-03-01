/*
    4. Accept one number from user and check whether it is Even or Odd.

    Input  : 12
    Output : Given number is Even

    Input  : 7
    Output : Given number is Odd

*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : ChkEven
//  Description    : This function accepts one integer and checks whether the given number is Even or Odd.
//  Input          : Integer
//  Output         : TRUE  - If number is Even, FALSE - If number is Odd
//  Author         : Gavade Somanath Vilas
//  Date           : 01/03/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkEven(int iNo)
{
    if(iNo % 2 == 0)
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
//  Application Name : Even Odd Checker
//  Description      : This application accepts one number from the user and checks whether the number is Even or Odd.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    if(bRet == TRUE)
    {
        printf("Given number is Even");
    }
    else
    {
        printf("Given number is Odd");
    }

    return 0;
}