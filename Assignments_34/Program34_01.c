/* 
    1.Write a program which accept one number and position from user and check whether bit at that position is on or off. If bit is one return TRUE otherwise return FALSE.

    Input  : 10 2
    Output : TRUE
    
*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : CheckBit
//  Description    : This function checks whether bit at given position is ON or OFF.
//  Input          : Integer, Integer
//  Output         : Returns TRUE if bit is ON otherwise FALSE
//  Author         : Gavade Somanath Vilas
//  Date           : 22/04/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL CheckBit(int iNo, int iPos)
{
    int iMask = 0x1;
    int iResult = 0;

    iMask = iMask << (iPos - 1);

    iResult = iNo & iMask;

    if(iResult == iMask)
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
//  Application Name : Check Bit Program
//  Description      : This application accepts a number and position from user and checks whether that bit is ON or OFF.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iLocation = 0;
    BOOL bRet = FALSE;

    printf("Enter a Number : \n");
    scanf("%d", &iValue);

    printf("Enter a Position : \n");
    scanf("%d", &iLocation);

    bRet = CheckBit(iValue, iLocation);

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