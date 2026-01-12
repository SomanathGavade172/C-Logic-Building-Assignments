/* 
    2.Write a program which accept number from user and return the count of odd digits.

    Input  : 2395
    Output : 3

    Input  : 1018
    Output : 2

    Input  : -1018
    Output : 2

    Input  : 8462
    Output : 0

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CounRange
//  Description     :   Counts the number of odd digits in the given number.
//  Input           :   Integer
//  Output          :   Integer (Count of digits between 3 and 7)
//  Author          :   Gavade Somanath Vilas
//  Date            :   12/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  Function Definition
int CounRange(int iNo)
{
    int iCount = 0;
    int iDigit = 0;

    // Filter
    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit > 3 && iDigit < 7)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }

    return iCount;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Count Digits in Range.
//  Description         :   This application accepts a number from the user and displays the count of digits between 3 and 7.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue  = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = CounRange(iValue);        //  Function Call.

    printf("%d", iRet);


    return 0;
}