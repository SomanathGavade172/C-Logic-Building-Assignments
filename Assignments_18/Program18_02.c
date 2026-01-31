/* 
    2. Accept amount in US Dollar and return its corresponding value in Indian currency.
       Consider 1 Dollar = 70 Rupees.

    Input  : 10
    Output : 700

    Input  : 3
    Output : 210

    Input  : 1200
    Output : 84000
    
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : DollarToINR
//  Description    : Converts the given amount in US Dollars to Indian Rupees.
//                   Conversion rate considered is 1 Dollar = 70 Rupees.
//  Input          : Integer (Amount in Dollars)
//  Output         : Integer (Equivalent amount in Rupees)
//  Author         : Gavade Somanath Vilas
//  Date           : 31/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
int DollarToINR(int iNo)
{
    int iConvert = 0;

    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    iConvert = iNo * 70;

    return iConvert;    
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Dollar to INR Converter
//  Description      : This application accepts an amount in US Dollars from the user
//                     and displays its equivalent value in Indian Rupees.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter amount in Dollar : \n");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);        // Function Call

    printf("Value in INR is : %d\n", iRet);

    return 0;
}
