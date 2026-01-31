/* 
    1.Write a program which accept number from user and display below pattern.

    Input  : 5
    Output : * * * * * # # # # #

    Input  : 6
    Output : * * * * * * # # # # # # #

    Input  : -5
    Output : * * * * * # # # # #

    Input  : 2
    Output : * * # #

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Display
//  Description    : Displays '*' and '#' pattern based on the given number.
//                   First prints '*' equal to the number, followed by '#' equal to the number.
//  Input          : Integer
//  Output         : None (Displays pattern on the screen)
//  Author         : Gavade Somanath Vilas
//  Date           : 31/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
void Display(int iNo)
{
    int iCnt = 0;

    // Updator.
    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Pattern Display
//  Description      : This application accepts a number from the user and prints a pattern of '*' and '#' accordingly.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter a Number : \n");
    scanf("%d", &iValue);

    Display(iValue);        //  Function Call.

    return 0;
}