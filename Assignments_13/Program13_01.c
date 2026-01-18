/* 
    1. Accept N numbers from user and return difference between summation of even elements and summation of odd elements.

    Input    : N : 6

    Elements : 85 66 3 80 93 88

    Output   : 53 (234 - 181)

*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Difference
//  Description     :   Calculates and returns the difference between the summation of even elements and the summation of odd elements of the given array.
//  Input           :   Integer array, Integer (Number of elements)
//  Output          :   Integer (Difference between even and odd summation)
//  Author          :   Gavade Somanath Vilas
//  Date            :   18/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  Function Definition
int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int iSumEven = 0, iSumOdd = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
        else
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }
    }

    return iSumEven - iSumOdd;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Difference of Even and Odd Elements
//  Description         :   This application accepts N numbers from the user and displays the difference between the summation of even elements and odd elements.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d", &iSize);

    // Allocate dynamic memory
    ptr = (int *) malloc(iSize * sizeof(int));

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = Difference(ptr, iSize);        // Function call

    printf("Result is : %d\n", iRet);

    return 0;

}
