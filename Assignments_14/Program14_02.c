/* 
    2. Accept N numbers from user and return difference between frequency of even number and odd numbers.
    
    Input    : N : 7

    Elements : 85 66 3 80 93 88 90

    Output   : 1 (4 -3)

*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountEven
//  Description     :   Calculates and returns the difference between the frequency of even numbers and the frequency of odd numbers present in the array.
//  Input           :   Integer array, Integer (Number of elements)
//  Output          :   Integer (Difference between even count and odd count)
//  Author          :   Gavade Somanath Vilas
//  Date            :   19/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  Function Definition
int CountEven(int Arr[], int iSize)
{
    int iCnt = 0, iCountSum = 0, iCountOdd = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iCountSum++;
        }
        else
        {
            iCountOdd++;
        }
    }

    return iCountSum - iCountOdd;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Difference Between Even and Odd Frequency
//  Description         :   This application accepts N numbers from the user and returns the difference between the frequency of even numbers and odd numbers.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d", &iLength);

    // Allocate dynamic memory.
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

    iRet = CountEven(ptr, iLength);     // Function Call

    printf("Frequency of Difference is : %d", iRet);

    // Deallocate the memory.
    free(ptr);

    return 0;

}
