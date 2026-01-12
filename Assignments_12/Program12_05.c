/*  
    5.Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.

    Input  : 2395
    Output : -15    (2 - 17)

    Input  : 1018
    Output : 6      (8 - 2)

    Input  : 8440
    Output : 16     (16 - 0)

    Input  : 5733
    Output : -18    (0 - 18)

*/


#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountDiff
//  Description     :   Calculates and returns the difference between the sum of even digits and the sum of odd digits of the given number.
//  Input           :   Integer
//  Output          :   Integer (Multiplication of digits)
//  Author          :   Gavade Somanath Vilas
//  Date            :   12/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  Function Definition
int CountDiff(int iNo)
{
    int iDigit = 0;
    int iSumEven = 0, iSumOdd = 0;
    
    // Filter
    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            iSumEven = iSumEven + iDigit;
        }
        else
        {
            iSumOdd = iSumOdd + iDigit;
        }        

        iNo = iNo / 10;
    }

    return iSumEven - iSumOdd;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Difference of Even and Odd Digits.
//  Description         :   This application accepts a number from the user and displays the difference between the sum of even digits and odd digits.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue  = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);        //  Function Call.

    printf("%d", iRet);


    return 0;
}