/* 
    4. Write a program which accept one number and position from user and toggle that bit. Return modified number.

    Input  : 10 3
    Output : 14
    
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : ToggleBit
//  Description    : This function toggles the bit at given position.
//  Input          : Integer, Integer
//  Output         : Returns modified number after toggling the bit
//  Author         : Gavade Somanath Vilas
//  Date           : 22/04/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int ToggleBit(int iNo, int iPos)
{
    int iMask = 0x1;
    int iResult = 0;

    iMask = iMask << (iPos - 1);

    iResult = iNo ^ iMask;

    return iResult;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Toggle Bit Program
//  Description      : This application accepts a number and position from user and toggles that bit.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{   
    int iValue = 0, iLocation = 0;
    int iRet = 0;

    printf("Enter a Number : \n");
    scanf("%d", &iValue);

    printf("Enter a Position : \n");
    scanf("%d", &iLocation);

    iRet = ToggleBit(iValue, iLocation);

    printf("Number after bit Toggle : %d\n", iRet);

    return 0;
}