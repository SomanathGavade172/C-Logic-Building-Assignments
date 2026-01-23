/* 
    4. Accept N numbers from user and accept Range, Display all elements from that range.

    Input    : N : 6
    Start    : 60
    End      : 90
    Elements : 85 66  3 76 93 88

    Output   : 85 66 76 88

    Input    : N : 6
    Start    : 30
    End      : 50
    Elements : 85 66  3 76 93 88

    Output   : 3

*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name       :   Range
//  Description         :   Displays all elements which lie within the given range.
//  Input               :   Integer array (Base address of array),
//                          Integer (Size of array), Integer (Starting range),
//                          Integer (Ending range)
//  Output              :   Displays elements within the given range
//  Author              :   Gavade Somanath Vilas
//  Date                :   23/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
void Range(int Arr[], int iSize, int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
       if(Arr[iCnt] >= iStart && Arr[iCnt] <= iEnd)
       {
            printf("%d\t", Arr[iCnt]);
       }
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Display Elements in Given Range Using Dynamic Memory Allocation
//  Description         :   This application dynamically allocates memory for an integer array, accepts elements from the user, accepts a range,
//                          and displays all elements that lie within that range.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;

    printf("Enter number of elements : \n");
    scanf("%d", &iLength);

    if(iLength <= 0)
    {
        printf("Invalid number of elements\n");
        return -1;
    }

    printf("Enter Starting number : \n");
    scanf("%d", &iValue1);

    printf("Enter Ending number : \n");
    scanf("%d", &iValue2);

    //  Allocate dynamic memory.
    ptr = (int *) malloc(iLength * sizeof(int));

    printf("Enter %d elements : \n", iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    Range(ptr, iLength, iValue1, iValue2);       //  Function call.

    // Deallocate the memory.
    free(ptr);

    return 0;
}