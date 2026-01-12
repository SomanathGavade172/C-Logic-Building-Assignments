/* 
    4.Write a program which accept number from user and return multiplication of all digits. 

    Input  : 2395
    Output : 270

    Input  : 1018
    Output : 8

    Input  : 9440
    Output : 144

    Input  : 922432
    Output : 864

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   MultiDigits
//  Description     :   Calculates and returns the multiplication of all non-zero digits of the given number.
//  Input           :   Integer
//  Output          :   Integer (Multiplication of digits)
//  Author          :   Gavade Somanath Vilas
//  Date            :   12/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  Function Definition
int MultiDigits(int iNo)
{
    int iMulti = 1;
    int iDigit = 0;

    // Filter
    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit != 0)
        {
            iMulti = iMulti * iDigit;
        }        

        iNo = iNo / 10;
    }

    return iMulti;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Multiplication of Digits.
//  Description         :   This application accepts a number from the user and displays the multiplication of its digits.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue  = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = MultiDigits(iValue);        //  Function Call.

    printf("%d", iRet);


    return 0;
}