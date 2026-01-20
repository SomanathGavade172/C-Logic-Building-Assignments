/* 
    4. Accept N numbers from user and return frequency of 11 form it.
    
    Input    : N : 6

    Elements : 85 66 3 15 93 88
    Output   : 0

    Input    : N : 6

    Elements : 85 11 3 15 11 111
    Output   : 2

*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Frequency
//  Description     :   Counts how many times the number 11 appears in the given array.
//  Input           :   Integer array, Integer (Number of elements)
//  Output          :   Integer (Frequency of number 11)
//  Author          :   Gavade Somanath Vilas
//  Date            :   20/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  Function Definition
int Frequency(int Arr[], int iSize)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iCount++;
        }
    }

    return iCount;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Count Frequency of Number 11
//  Description         :   This application accepts N numbers from the user and returns the frequency of number 11 from the array.
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

    iRet = Frequency(ptr, iLength);     

    printf("%d\n", iRet);
        
    free(ptr);

    return 0;
}