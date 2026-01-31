/* 
    5. Write a program which returns the difference between even factorial and odd factorial of a given number.

    Input  : 5
    Output : -7  (8 - 15)

    Input  : -5
    Output : -7  (8 - 15)

    Input  : 10
    Output : 2895  (3840 - 945)
    
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : FactorialDiff
//  Description    : Calculates the difference between even factorial and odd factorial of the given number.
//                   (Even factorial − Odd factorial)
//  Input          : Integer
//  Output         : Integer (Difference of even and odd factorial)
//  Author         : Gavade Somanath Vilas
//  Date           : 31/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1, iOddFact = 1;

    // Handle negative input
    if(iNo < 0)
    {
        iNo = -(iNo);
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        }
    }

    return iEvenFact - iOddFact;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Factorial Difference Calculator
//  Description      : This application accepts a number from the user and displays the difference between its even factorial and odd factorial.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);        // Function Call

    printf("Factorial difference is : %d\n", iRet);

    return 0;
}
