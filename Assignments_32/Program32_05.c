/* 
    5. Write a program which checks whether first and last bit is On or OFF. First bit means bit number 1 and last bit means bit number 32.

*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : CheckBit
//  Description    : This function checks whether the 7th, 8th and 9th bits of the given number are ON or OFF.
//  Input          : Integer
//  Output         : Returns TRUE if all specified bits are ON, otherwise FALSE
//  Author         : Gavade Somanath Vilas
//  Date           : 20/04/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL CheckBit(UINT iNo)
{
    int iResult = 0;
    int iMask = 0x80000001;

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
//  Application Name : Check 7th, 8th and 9th Bit Program
//  Description      : This application accepts a number from the user and checks whether its 7th, 8th and 9th bits are ON or OFF.
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
        printf("1th & 32th bits are ON\n");
    }
    else
    {
        printf("One or more bits are OFF\n");
    }

    return 0;
}