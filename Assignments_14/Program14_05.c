/* 
    5. Accept N numbers from user and accept one another number as NO , return frequency of NO form it.

    Input : N        : 6
            NO       : 66
            Elements : 85 66 3 66 93 88
    Output : 2

    Input : N        : 6
            NO       : 12
            Elements : 85 11 3 15 11 111
    Output : 0

*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Frequency
//  Description     :   Counts how many times the given number (NO) appears in the array.
//  Input           :   Integer array, Integer (Number of elements), Integer (Number to search)
//  Output          :   Integer (Frequency of given number)
//  Author          :   Gavade Somanath Vilas
//  Date            :   20/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  Function Definition
int Frequency(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }

    return iCount;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Count Frequency of Given Number
//  Description         :   This application accepts N numbers from the user and returns the frequency of a given number (NO) from the array.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0, iValue = 0;

    printf("Enter number of elements : \n");
    scanf("%d", &iLength);

    // Allocate the memory
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

    printf("Enter the number to find frequency : \n");
    scanf("%d", &iValue);

    iRet = Frequency(ptr, iLength, iValue);     // Function Call.

    printf("Frequency of %d is : %d\n", iValue, iRet);

    // Deallocate the memory.
    free(ptr);

    return 0;

}
