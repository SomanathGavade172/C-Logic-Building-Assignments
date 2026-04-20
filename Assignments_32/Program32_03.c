/* 
    3. Write a program which checks whether 7th & 15th & 21st , 28th bit is On or OFF.

*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : CheckBit
//  Description    : This function checks whether the 7th, 15th, 21st and 28th bits of the given number are ON or OFF.
//  Input          : Integer
//  Output         : Returns TRUE if all specified bits are ON, otherwise FALSE
//  Author         : Gavade Somanath Vilas
//  Date           : 20/04/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL CheckBit(UINT iNo)
{
    int iResult = 0;
    int iMask = 0x8104040;

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
//  Application Name : Check Multiple Bits Program
//  Description      : This application accepts a number from the user and checks whether its 7th, 15th, 21st and 28th bits are ON or OFF.
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
        printf("7th, 15th, 21st and 28th bits are ON\n");
    }
    else
    {
        printf("One or more bits are OFF\n");
    }

    return 0;
}