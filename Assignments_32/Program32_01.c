/* 
    1.Write a program which checks whether 15th bit is On or OFF.

*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : CheckBit
//  Description    : This function checks whether the 15th bit of the given number is ON or OFF.
//  Input          : Integer
//  Output         : Returns TRUE if 15th bit is ON, otherwise FALSE
//  Author         : Gavade Somanath Vilas
//  Date           : 19/04/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL CheckBit(UINT iNo)
{
    int iResult = 0;
    int iMask = 0x4000;

    iResult = iMask & iNo;

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
//  Application Name : Check 15th Bit Program
//  Description      : This application accepts a number from the user and checks whether its 15th bit is ON or OFF.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a Number : \n");
    scanf("%d", &iValue);

    bRet = CheckBit(iValue);

    if(bRet == TRUE)
    {
        printf("15th bit is ON\n");
    }
    else
    {
        printf("15th bit is OFF\n");
    }

    return 0;
}