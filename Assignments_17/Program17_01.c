/* 
    1.Write a program which accept number from user and print that number of $ & * on screen.

    Input  : 5
    Output : $ * $ * $ * $ * $ *

    Input  : 3
    Output : $ * $ * $ *

    Input  : -3
    Output : $ * $ * $ *

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Pattern
//  Description    : Displays the pattern "$ *" on the screen as many times as specified by the input number.
//  Input          : Integer
//  Output         : None (Prints "$ *" pattern on the screen)
//  Author         : Gavade Somanath Vilas
//  Date           : 26/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Patter(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$ * ");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Pattern Printing
//  Description         :   This application accepts a number from the user and prints the "$ *" pattern on the screen
//                          the specified number of times.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    Patter(iValue);
    
    return 0;
}
