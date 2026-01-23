/* 
    3. Accept N numbers from user and accept one another number as NO ,return index of last occurrence of that NO.

    Input    : N : 6
    NO       : 66
    Elements : 85 66 3 66 93 88

    Output   : 3

    Input    : N : 6
    NO       : 93
    Elements : 85 66 3 66 93 88

    Output   : 4

    Input    : N : 6
    NO       : 12
    Elements : 85 11 3 15 11 111

    Output   : -1

*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name       :   LastOcc
//  Description         :   Returns the index of last occurrence of a given number in the array.
//  Input               :   Integer array (Base address of array),
//                          Integer (Size of array), Integer (Number to search)
//  Output              :   Integer (Index of last occurrence, -1 if not found)
//  Author              :   Gavade Somanath Vilas
//  Date                :   23/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
int LastOcc(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iIndex = -1;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iIndex = iCnt;
        }
    }
    return iIndex;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Last Occurrence of Number Using Dynamic Memory Allocation
//  Description         :   This application dynamically allocates memory for an integer array, accepts elements from the user, accepts a number to search,
//                          and returns the index of its last occurrence.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0, iValue = 0, iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d", &iLength);

    // Allocate Dynamic memory.
    ptr = (int *) malloc(iLength * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements : \n", iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Enter a number you want to search : \n");
    scanf("%d", &iValue);

    iRet = LastOcc(ptr, iLength, iValue);    // Function call.

    if(iRet == -1)
    {
        printf("Number Not found\n");
    }
    else
    {
        printf("Find at index : %d\n", iRet);
    } 

    // Deallocate the memory.
    free(p);

    return 0;

}

