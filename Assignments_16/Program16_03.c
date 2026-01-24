/* 
    1. Accept N numbers from user and return the largest number.

    Input    : N : 6

    Elements : 85 66 3 66 93 88

    Output   : 93

*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Difference
//  Description    : Calculates and returns the difference between
//                   maximum and minimum elements of the array.
//  Input          : Integer array (Base address), Integer (Size of array)
//  Output         : Integer (Difference = Max - Min)
//  Author         : Gavade Somanath Vilas
//  Date           : 24/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
int Difference(int Arr[], int isize)
{
    int iCnt = 0, iMax = 0, iMin = 0;
    iMax = Arr[0];
    iMin = Arr[0];

    for(iCnt = 0; iCnt < isize; iCnt++)
    {
        if(iMax < Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }

        if(iMin > Arr[iCnt])
        {
            iMin = Arr[iCnt];
        }
    }

    return iMax - iMin;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Difference Between Maximum and Minimum
//  Description         :   This application dynamically allocates memory for an integer array, accepts elements from the user, calculates the difference between the maximum
//                          and minimum elements using a function, and then releases the allocated memory.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d", &iLength);

    // Check Array size.
    if(iLength <= 0)
    {
        printf("Invalid number of elements\n");
        return -1;
    }

    
    ptr = (int *) malloc(iLength * sizeof(int));

   
    if(ptr == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter %d elements : \n", iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = Difference(ptr, iLength);       

    printf("Difference Number is : %d\n", iRet);

   
    free(ptr);

    return 0;
}