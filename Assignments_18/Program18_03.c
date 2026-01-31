/* 
    3. Write a program to find the even factorial of a given number.

    Input  : 5
    Output : 8  (4 * 2)

    Input  : -5
    Output : 8  (4 * 2)

    Input  : 10
    Output : 3840  (10 * 8 * 6 * 4 * 2)
    
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : EvenFactorial
//  Description    : Calculates the multiplication of all even numbers from the given number up to 1.
//  Input          : Integer
//  Output         : Integer (Even factorial of the number)
//  Author         : Gavade Somanath Vilas
//  Date           : 31/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    // Handle negative input
    if(iNo < 0)
    {
        iNo = -(iNo);
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iFact = iFact * iCnt;
        }
    }

    return iFact;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Even Factorial Calculation
//  Description      : This application accepts a number from the user and displays its even factorial.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);        // Function Call

    printf("Even Factorial of Number is : %d\n", iRet);

    return 0;
}
