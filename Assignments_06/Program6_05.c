/* 
    5. Write a program which accept number from user and display its table in reverse order.

    Input  : 2
    Output : 20 18 16 14 12 10  8  6  4 2

    Input  : 5
    Output : 50 45 40 35 30 25 20 15 10 5

    Input  : -5
    Output : 50 45 40 35 30 25 20 15 10 5

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   TableRev
//  Description     :   Displays the multiplication table of a given number in reverse order.
//  Input           :   Integer
//  Output          :   None (Displays table on console)
//  Author          :   Gavade Somanath Vilas
//  Date            :   06/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  Function Definition
void TableRev(int iNo)
{
    int iCnt = 0;

    //  Filter
    if(iNo == 0)
    {
        return;
    }

    //  Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d\t", iNo * iCnt);
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Display Reverse Table
//  Description         :   This application accepts one integer from the user and displays its multiplication table in reverse order.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter a Number : \n");
    scanf("%d", &iValue);

    TableRev(iValue);      //  Function Call.

    return 0;
}