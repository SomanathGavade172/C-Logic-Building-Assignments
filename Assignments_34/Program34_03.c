/* 
    3. Write a program which accept one number and position from user and on that bit. Return modified number.

    Input  : 10 3
    Output : 14
    
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : OnBit
//  Description    : This function turns ON the bit at given position.
//  Input          : Integer, Integer
//  Output         : Returns modified number after turning ON the bit
//  Author         : Gavade Somanath Vilas
//  Date           : 22/04/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int OnBit(int iNo, int iPos)
{
    int iMask = 0x1;
    int iResult = 0;

    iMask = iMask << (iPos - 1);

    iResult = iNo | iMask;

    return iResult;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : On Bit Program
//  Description      : This application accepts a number and position from user and turns ON that bit.
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

    iRet = OnBit(iValue, iLocation);

    printf("Number after Bit On : %d\n", iRet);

    return 0;
}