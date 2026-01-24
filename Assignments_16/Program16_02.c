/* 
    2. Accept N numbers from user and return the smallest number.

    Input     : N : 6

    Elements  : 85 66 3 66 93 88

    Output    : 3

*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name       :   Minimum
//  Description         :   Finds and returns the Minimum element from the given array.
//  Input               :   Integer array (Base address of array), Integer (Size of array)
//  Output              :   Integer (Returns Minimum element)
//  Author              :   Gavade Somanath Vilas
//  Date                :   24/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
int Minimum(int Arr[], int isize)
{
    int iCnt = 0, iMin = 0;
    iMin = Arr[0];

    for(iCnt = 0; iCnt < isize; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    return iMin;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Minimum Element Using Dynamic Memory Allocation
//  Description         :   This application dynamically allocates memory for an integer array, accepts elements from the user, finds the Minimum element using
//                          a function, and then releases the allocated memory.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d", &iLength);

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

    iRet = Minimum(ptr, iLength);

    printf("Minimum Number is : %d\n", iRet);

    free(ptr);

    return 0;
}