/*
    2. Write a program which accept one number and position from user and off that bit. Return modified number.

    Input  : 10 2
    Output : 8 
    
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : OffBit
//  Description    : This function turns OFF the bit at given position.
//  Input          : Integer, Integer
//  Output         : Returns modified number after turning OFF the bit
//  Author         : Gavade Somanath Vilas
//  Date           : 22/04/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int OffBit(int iNo, int iPos)
{
    int iMask = 0x1;
    int iResult = 0;

    iMask = iMask << (iPos - 1);
    iMask = ~iMask;

    iResult = iNo & iMask;

    return iResult;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Off Bit Program
//  Description      : This application accepts a number and position from user and turns OFF that bit.
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

    iRet = OffBit(iValue, iLocation);

    printf("Number after Bit off : %d\n", iRet);

    return 0;
}