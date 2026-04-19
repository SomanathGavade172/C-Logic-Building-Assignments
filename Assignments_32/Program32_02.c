/* 
    2. Write a program which checks whether 5th & 18th bit is On or OFF.

*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : CheckBit
//  Description    : This function checks whether the 5th and 18th bits of the given number are ON or OFF.
//  Input          : Integer
//  Output         : Returns TRUE if both 5th and 18th bits are ON, otherwise FALSE
//  Author         : Gavade Somanath Vilas
//  Date           : 19/04/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL CheckBit(UINT iNo)
{
    int iResult = 0;
    int iMask = 0x20010;

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
//  Application Name : Check 5th and 18th Bit Program
//  Description      : This application accepts a number from the user and checks whether its 5th and 18th bits are ON or OFF.
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
        printf("5th and 18th bits are ON\n");
    }
    else
    {
        printf("5th and 18th bits are OFF\n");
    }

    return 0;
}