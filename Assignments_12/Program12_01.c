/* 
    1.Write a program which accept number from user and return the count of even digits.

        Input  : 2395
        Output : 1

        Input  : 1018
        Output : 2

        Input  : -1018
        Output : 2

        Input  : 8462
        Output : 4

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountEven
//  Description     :   Counts the number of Even digits in the given number.
//  Input           :   Integer
//  Output          :   Integer (Count of Even digits)
//  Author          :   Gavade Somanath Vilas
//  Date            :   12/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  Function Definition
int CountEven(int iNo)
{
    int iCount = 0;
    int iDigit = 0;

    // Filter
    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    // 0 is an even digit
    if(iNo == 0)
    {
        return 1;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }

    return iCount;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Count Even Digits.
//  Description         :   This application accepts a number from the user and displays the count of Even digits.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue  = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = CountEven(iValue);        //  Function Call.

    printf("%d", iRet);


    return 0;
}