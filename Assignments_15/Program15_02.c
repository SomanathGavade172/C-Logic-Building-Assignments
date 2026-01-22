/* 
    2. Accept N numbers from user and accept one another number as NO ,return index of first occurrence of that NO.

    Input    : N : 6
    NO       : 66
    Elements : 85 66 3 66 93 88

    Output : 1

*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name       :   FirstOcc
//  Description         :   Returns the index of first occurrence of a given number in the array.
//  Input               :   Integer array (Base address of array),
//                          Integer (Size of array), Integer (Number to search)
//  Output              :   Integer (Index of first occurrence, -1 if not found)
//  Author              :   Gavade Somanath Vilas
//  Date                :   22/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
int FirstOcc(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt;
        }
    }

    return -1;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   First Occurrence of Number Using Dynamic Memory Allocation
//  Description         :   This application dynamically allocates memory for an integer array, accepts elements from the user, accepts a number to search,
//                          and returns the index of its first occurrence using a function.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0, iValue = 0;
    int iRet = 0;

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

    iRet = FirstOcc(ptr, iLength, iValue);    // Function Call.

    if(iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("First occurrence of number is : %d", iRet);
    }    

    return 0;

}
