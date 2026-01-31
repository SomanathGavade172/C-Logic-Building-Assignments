/* 
    4. Write a program to find the odd factorial of a given number.
    
    Input  : 5
    Output : 15  (5 * 3 * 1)

    Input  : -5
    Output : 15  (5 * 3 * 1)

    Input  : 10
    Output : 945  (9 * 7 * 5 * 3 * 1)
    
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : OddFactorial
//  Description    : Calculates the product of all odd numbers from the given number down to 1.
//  Input          : Integer
//  Output         : Integer (Odd factorial of the number)
//  Author         : Gavade Somanath Vilas
//  Date           : 31/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    // Updator.
    if(iNo < 0)
    {
        iNo = -(iNo);
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            iFact = iFact * iCnt;
        }
    }

    return iFact;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Odd Factorial Calculator
//  Description      : This application accepts a number from the user and displays the odd factorial of that number.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);        // Function Call

    printf("Odd Factorial of Number is : %d\n", iRet);

    return 0;
}
