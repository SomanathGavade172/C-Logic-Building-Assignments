/* 
    1. Accept N numbers from user and accept one another number as NO ,check whether NO is present or not.

    Input    : N : 6
    NO       : 66
    Elements : 85 66 3 66 93 88

    Output   : TRUE

    Input    : N : 6
    NO       : 12
    Elements : 85 11 3 15 11 111

    Output   : FALSE

*/

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name       :   Search
//  Description         :   Checks whether a given number is present in the array or not.
//  Input               :   Integer array (Base address of array), Integer (Size of array),
//                          Integer (Number to search)
//  Output              :   Boolean (Returns TRUE if number is present, otherwise FALSE)
//  Author              :   Gavade Somanath Vilas
//  Date                :   22/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
BOOL Check(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    BOOL bFlag = FALSE;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bFlag = TRUE;
            break;
        }
    }

    return bFlag;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Search Number Using Dynamic Memory Allocation
//  Description         :   This application dynamically allocates memory for an integer array, accepts elements from the user, accepts a number to search,
//                          checks whether the number is present using a function, and then releases the allocated memory.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0, iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number of elements : \n");
    scanf("%d", &iLength);

    // Allocate dynamic memory.
    ptr = (int *) malloc(iLength * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements : \n", iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Enter Number you want to search : \n");
    scanf("%d", &iValue);

    bRet = Check(ptr, iLength, iValue);    //  Function Call.

    if(bRet == TRUE)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return 0;

}
