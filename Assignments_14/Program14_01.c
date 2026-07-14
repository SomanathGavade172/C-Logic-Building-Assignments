/* 
    1. Accept N numbers from user and return frequency of even numbers.
    
    Input    : N : 6

    Elements : 85 66 3 80 93 88

    Output   : 3

*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountEven
//  Description     :   Counts and returns the number of even elements present in the given array.
//  Input           :   Integer array, Integer (Number of elements)
//  Output          :   Integer (Frequency of even numbers)
//  Author          :   Gavade Somanath Vilas
//  Date            :   19/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  Function Definition
int CountEven(int Arr[], int iSize)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iCount++;
        }
    }

    return iCount;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Count Frequency of Even Numbers
//  Description         :   This application accepts N numbers from the user and returns the count of even elements present in the array.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d", &iLength);

    ptr = (int *) malloc(iLength * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory : \n");
        return -1;
    }

    printf("Enter %d elements : \n", iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = CountEven(ptr, iLength);     //  Function Call.

    printf("Result is %d : ", iRet);

    // deallocate the memory.
    free(ptr);

    return 0;
}