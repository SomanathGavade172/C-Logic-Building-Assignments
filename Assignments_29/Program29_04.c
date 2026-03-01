/*
    4. Accept two numbers from user and display first number second number of times.

    Input  : 12    5
    Output : 12    12    12    12    12

    Input  : -2    3    
    Output : -2    -2    -2

    Input  : -2    0
    Output :

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Display
//  Description    : This function accepts two integers and displays the first number as many times as specified by the
//                   second number.
//  Input          : Integer, Integer
//  Output         : Displays number on screen
//  Author         : Gavade Somanath Vilas
//  Date           : 01/03/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    if(iFrequency <= 0)
    {
        return;
    }

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t", iNo);
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Number Repetition Program
//  Description      : This application accepts two numbers from the user and displays the first number second number of times.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    printf("Enter a frequency : ");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}